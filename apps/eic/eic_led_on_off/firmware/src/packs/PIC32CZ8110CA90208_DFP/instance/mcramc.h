/*
 * Instance header file for PIC32CZ8110CA90208
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

/* file generated from device description version 2021-07-22T19:46:10Z */
#ifndef _PIC32CZCA90_MCRAMC_INSTANCE_
#define _PIC32CZCA90_MCRAMC_INSTANCE_


/* ========== Instance Parameter definitions for MCRAMC peripheral ========== */
#define MCRAMC_AHB_CLOCK_ENABLE                  _UL_(1)    /* MCRAMC CLOCK GATER */
#define MCRAMC_AHB_ECC                           _UL_(1)    /* ECC LOGIC */
#define MCRAMC_AHB_PORTS_NB                      _UL_(1)    /* NUMBER OF AHB PORTS */
#define MCRAMC_AHB_READ_PREBUFFERING             _UL_(1)    /* AHB READ PREBUFFERING */
#define MCRAMC_AHB_REQUEST_ISOLATION_REGISTER    _UL_(1)    /* AHB REQUEST TIMING PATHS ISOLATION */
#define MCRAMC_ARBITRATION_TYPE                  _UL_(2)    /* ARBITRATION SCHEME, FIXED_PRIORITY = 0, HIGHLIGHT = 1, HOPSCOTCH = 2 */
#define MCRAMC_BIT_STROBE_RAM                    _UL_(0)    /* Set this parameter to TRUE if the ram_wem_bundle outputs are connected to ram bit-strobe write masks */
#define MCRAMC_CHANNELS_NB                       _UL_(1)    /* NUMBER OF RAM CHANNELS */
#define MCRAMC_ECC_SYNDROM_REGISTER              _UL_(1)    /* ECC TIMING PATH BALANCING */
#define MCRAMC_HADDR_READ_ISOLATION_REGISTER     _UL_(0)    /* Set to IMPLEMENTED to add 1 wait-state max (0 min) per memory new line read access for each of the AHB timing path isolations */
#define MCRAMC_HRDATA_ISOLATION_REGISTER         _UL_(1)    /* AHB REQUEST TIMING PATHS ISOLATION */
#define MCRAMC_MCRAMC_CLK_GATER                  _UL_(1)    /* MCRAMC CLOCK GATER */
#define MCRAMC_MCRAMC_PADDR_SIZE                 _UL_(8)    /* APB USER INTERFACE */
#define MCRAMC_MEMORY_AUTO_CORRECTION            _UL_(1)    /* Perform an automatic write-back of the corrected ram word after read */
#define MCRAMC_MEMORY_ENABLE_POLARITY            _UL_(0)    /* POSITIVE if Memory is selected when ram_me is 1'b1 */
#define MCRAMC_MW_CLOCK_ENABLE                   _UL_(0)    /* MCRAMC CLOCK GATER */
#define MCRAMC_MW_DATA_SIZE                      _UL_(32)   /* MW DATA BUS SIZE */
#define MCRAMC_MW_PORT_SLICES_NB                 _UL_(0)    /* NUMBER OF PORT SLICES FOR THE WAITED SRAM INTERFACE */
#define MCRAMC_M0_CLOCK_ENABLE                   _UL_(0)    /* MCRAMC CLOCK GATER */
#define MCRAMC_M0_DATA_SIZE                      _UL_(32)   /* M0 DATA BUS SIZE */
#define MCRAMC_M0_HYBRID_READ_WRITE_ACCESS       _UL_(0)    /* M0 HYBRID SIMULTANEOUS READ + WRITE ACCESS */
#define MCRAMC_M0_PORT_SLICES_NB                 _UL_(0)    /* NUMBER OF PORT SLICES FOR THE 0 WS SRAM INTERFACE */
#define MCRAMC_RAM_ADD_SIZE                      _UL_(14)   /* NUMBER OF ADDRESS BITS FOR ONE CHANNEL RAM CELL */
#define MCRAMC_RAM_AHB_ADDRESS_OFFSET            _UL_(0)    /* RAM BLOCK AHB ADDRESS OFFSET */
#define MCRAMC_STORE_BYTE_STROBE                 _UL_(0)    /* AHB byte strobes can be stored and read back through the M0 interface */
#define MCRAMC_ULTRA                             _UL_(1)    /* ULTRA USER INTERFACE */
#define MCRAMC_WRITE_ENABLE_POLARITY             _UL_(0)    /* POSITIVE if Memory is written when ram_we is 1'b1 */
#define MCRAMC_WRITE_ENABLE_USED                 _UL_(0)    /* TRUE  if the Memory makes use of a global per channel ram_we write enable */
#define MCRAMC_WRITE_MASK_POLARITY               _UL_(0)    /* POSITIVE if Memory is written when ram_wem is 1'b1 */
#define MCRAMC_INSTANCE_ID                       _UL_(16)   /* Instance index for MCRAMC */
#define MCRAMC_MCLK_ID_APB                       _UL_(20)   /* Index for MCRAMC APB clock */
#define MCRAMC_PAC_ID                            _UL_(16)   /* Index for MCRAMC registers write protection */

#endif /* _PIC32CZCA90_MCRAMC_INSTANCE_ */
