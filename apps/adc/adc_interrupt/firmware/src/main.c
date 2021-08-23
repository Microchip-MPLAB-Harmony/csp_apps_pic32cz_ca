/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes

#define ADC_VREF                             (3.3f)

volatile uint32_t adc_data[3];
volatile bool adc_sequence_done = false;
volatile bool adc_ch2_done = false;
float adc_inp_vol;
// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
void ADC_EventHandler(ADC_CORE_INT status, uintptr_t context)
{
    /* ADC1_CH0 and ADC1_CH1 are configured for scan trigger */
    if (status & ADC_CORE_INT_EOSRDY)
    {                
        adc_data[0] = ADC_ResultGet(ADC_CORE_NUM1, ADC_CH0);
        
        adc_data[1] = ADC_ResultGet(ADC_CORE_NUM1, ADC_CH1);
        
        adc_sequence_done = true;
    }
    /* ADC1_CH2 is configured for Global (Edge) Software trigger */
    if (status & ADC_CORE_INT_CHRDY_2)
    {
        adc_data[2] = ADC_ResultGet(ADC_CORE_NUM1, ADC_CH2);
        
        adc_ch2_done = true;
    }
}

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    printf("\r\n *********************************************** \r\n");
    printf("\r\n           ADC INTERRUPT DEMO \r\n");
    printf("\r\n *********************************************** \r\n");
    
    ADC_CORE1CallbackRegister(ADC_EventHandler, 0);    
    RTC_Timer32Start();

    while ( true )
    {
        if (SWITCH_Get() == 0)
        {
            // Wait for switch release
            while (SWITCH_Get() == 0);
            
            ADC_GlobalEdgeConversionStart();
        }
        
        if (adc_sequence_done == true) 
        {
			adc_sequence_done = false;
                                    
            adc_inp_vol = (uint16_t)adc_data[0] * ADC_VREF / 4095U;
            
            printf("\r\n ADC1_AIN0: ADC Count: 0x%03x, ADC Input Voltage = %d.%02d V \r\n", 
                    (uint16_t)adc_data[0], (int)adc_inp_vol, (int)((adc_inp_vol - (int)adc_inp_vol)*100.0));
            
            adc_inp_vol = (uint16_t)adc_data[1] * ADC_VREF / 4095U;
            
            printf("\r\n ADC1_AIN1: ADC Count: 0x%03x, ADC Input Voltage = %d.%02d V \r\n", 
                    (uint16_t)adc_data[1], (int)adc_inp_vol, (int)((adc_inp_vol - (int)adc_inp_vol)*100.0));
		}       
        if (adc_ch2_done == true)
        {
            adc_ch2_done = false;
            
            adc_inp_vol = (uint16_t)adc_data[2] * ADC_VREF / 4095U;
            
            printf("\r\n ADC1_AIN2: ADC Count: 0x%03x, ADC Input Voltage = %d.%02d V \r\n", 
                    (uint16_t)adc_data[2], (int)adc_inp_vol, (int)((adc_inp_vol - (int)adc_inp_vol)*100.0));
        }
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

