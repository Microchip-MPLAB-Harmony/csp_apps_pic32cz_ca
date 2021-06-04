/**
 * \brief Instance header file for PIC32CZ8110CA90208
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2021-05-21T19:08:33Z */
#ifndef _PIC32CZCA90_SERCOM8_INSTANCE_
#define _PIC32CZCA90_SERCOM8_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM8 peripheral ========== */
#define SERCOM8_CLK_REDUCTION                    _UL_(1)    /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM8_DMA                              _UL_(1)    /* DMA support implemented? */
#define SERCOM8_DMAC_ID_RX                       _UL_(21)   /* Index of DMA RX trigger */
#define SERCOM8_DMAC_ID_TX                       _UL_(22)   /* Index of DMA TX trigger */
#define SERCOM8_FIFO_IMPLEMENTED                 _UL_(1)    /* FIFO Rx/Tx implemented? */
#define SERCOM8_FIFO_SIZE                        _UL_(16)   /* Rx-Tx FIFO size in bytes */
#define SERCOM8_FSYNC_IMPLEMENTED                _UL_(1)    /* SPI Frame Synch mode implemented? */
#define SERCOM8_GCLK_ID_CORE                     _UL_(29)   
#define SERCOM8_GCLK_ID_SLOW                     _UL_(20)   
#define SERCOM8_SPI                              _UL_(1)    /* SPI mode implemented? */
#define SERCOM8_TWIM                             _UL_(1)    /* TWI Master mode implemented? */
#define SERCOM8_TWIS                             _UL_(1)    /* TWI Slave mode implemented? */
#define SERCOM8_TWI_HSMODE                       _UL_(1)    /* TWI HighSpeed mode implemented? */
#define SERCOM8_ULTRA_IMPLEMENTATION             _UL_(0)    /* ULTRA platform compatibility? */
#define SERCOM8_USART                            _UL_(1)    /* USART mode implemented? */
#define SERCOM8_USART_AUTOBAUD                   _UL_(1)    /* USART autobaud implemented? */
#define SERCOM8_USART_IRDA                       _UL_(1)    /* USART IrDA implemented? */
#define SERCOM8_USART_ISO7816                    _UL_(1)    /* USART ISO7816 mode implemented? */
#define SERCOM8_USART_LIN_MASTER                 _UL_(1)    /* USART LIN Master mode implemented? */
#define SERCOM8_USART_RS485                      _UL_(1)    /* USART RS485 mode implemented? */
#define SERCOM8_INSTANCE_ID                      _UL_(31)   /* Instance index for SERCOM8 */
#define SERCOM8_MCLK_ID_APB                      _UL_(39)   /* Index for SERCOM8 APB clock */
#define SERCOM8_PAC_ID                           _UL_(31)   /* Index for SERCOM8 registers write protection */

#endif /* _PIC32CZCA90_SERCOM8_INSTANCE_ */
