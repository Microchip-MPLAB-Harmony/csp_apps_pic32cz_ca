/*******************************************************************************
  CAN Peripheral Library Interface Header File

  Company:
    Microchip Technology Inc.

  File Name:
    plib_can3.h

  Summary:
    CAN PLIB interface declarations.

  Description:
    The CAN plib provides a simple interface to manage the CAN modules on
    Microchip microcontrollers. This file defines the interface declarations
    for the CAN plib.

  Remarks:
    None.

*******************************************************************************/
//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2021 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
//DOM-IGNORE-END

#ifndef PLIB_CAN3_H
#define PLIB_CAN3_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

/*
 * This section lists the other files that are included in this file.
 */
#include <stdbool.h>
#include <string.h>

#include "device.h"
#include "plib_can_common.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
    extern "C" {
#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************
/* CAN3 Message RAM Configuration Size */
#define CAN3_RX_FIFO0_ELEMENT_SIZE       72U
#define CAN3_RX_FIFO0_SIZE               72U
#define CAN3_RX_FIFO1_ELEMENT_SIZE       72U
#define CAN3_RX_FIFO1_SIZE               72U
#define CAN3_RX_BUFFER_ELEMENT_SIZE      72U
#define CAN3_RX_BUFFER_SIZE              72U
#define CAN3_TX_FIFO_BUFFER_ELEMENT_SIZE 72U
#define CAN3_TX_FIFO_BUFFER_SIZE         72U
#define CAN3_TX_EVENT_FIFO_SIZE          8U
#define CAN3_STD_MSG_ID_FILTER_SIZE      8U
#define CAN3_EXT_MSG_ID_FILTER_SIZE      16U

/* CAN3_MESSAGE_RAM_CONFIG_SIZE to be used by application or driver
   for allocating buffer from non-cached contiguous memory */
#define CAN3_MESSAGE_RAM_CONFIG_SIZE     320U

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************
void CAN3_Initialize(void);
bool CAN3_MessageTransmitFifo(uint8_t numberOfMessage, CAN_TX_BUFFER *txBuffer);
uint8_t CAN3_TxFifoFreeLevelGet(void);
bool CAN3_TxBufferIsBusy(uint8_t bufferNumber);
bool CAN3_TxEventFifoRead(uint8_t numberOfTxEvent, CAN_TX_EVENT_FIFO *txEventFifo);
bool CAN3_MessageReceive(uint8_t bufferNumber, CAN_RX_BUFFER *rxBuffer);
bool CAN3_MessageReceiveFifo(CAN_RX_FIFO_NUM rxFifoNum, uint8_t numberOfMessage, CAN_RX_BUFFER *rxBuffer);
CAN_ERROR CAN3_ErrorGet(void);
void CAN3_ErrorCountGet(uint8_t *txErrorCount, uint8_t *rxErrorCount);
void CAN3_MessageRAMConfigSet(uint8_t *msgRAMConfigBaseAddress);
bool CAN3_StandardFilterElementSet(uint8_t filterNumber, can_sidfe_registers_t *stdMsgIDFilterElement);
bool CAN3_StandardFilterElementGet(uint8_t filterNumber, can_sidfe_registers_t *stdMsgIDFilterElement);
bool CAN3_ExtendedFilterElementSet(uint8_t filterNumber, can_xidfe_registers_t *extMsgIDFilterElement);
bool CAN3_ExtendedFilterElementGet(uint8_t filterNumber, can_xidfe_registers_t *extMsgIDFilterElement);
void CAN3_SleepModeEnter(void);
void CAN3_SleepModeExit(void);
void CAN3_TxFifoCallbackRegister(CAN_TX_FIFO_CALLBACK callback, uintptr_t contextHandle);
void CAN3_TxEventFifoCallbackRegister(CAN_TX_EVENT_FIFO_CALLBACK callback, uintptr_t contextHandle);
void CAN3_RxBuffersCallbackRegister(CAN_TXRX_BUFFERS_CALLBACK callback, uintptr_t contextHandle);
void CAN3_RxFifoCallbackRegister(CAN_RX_FIFO_NUM rxFifoNum, CAN_RX_FIFO_CALLBACK callback, uintptr_t contextHandle);
void CAN3_CallbackRegister(CAN_CALLBACK callback, uintptr_t contextHandle);
// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
    }
#endif
// DOM-IGNORE-END

#endif // PLIB_CAN3_H

/*******************************************************************************
 End of File
*/
