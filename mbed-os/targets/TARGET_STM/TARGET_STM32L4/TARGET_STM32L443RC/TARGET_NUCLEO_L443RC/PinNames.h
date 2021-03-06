/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2016, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  PA_0  = 0x00,
  PA_1  = 0x01,
  PA_2  = 0x02,
  PA_3  = 0x03,
  PA_4  = 0x04,
  PA_5  = 0x05,
  PA_6  = 0x06,
  PA_7  = 0x07,
  PA_8  = 0x08,
  PA_9  = 0x09,
  PA_10 = 0x0A,
  PA_11 = 0x0B,
  PA_12 = 0x0C,
  PA_13 = 0x0D,
  PA_14 = 0x0E,
  PA_15 = 0x0F,

  PB_0  = 0x10,
  PB_1  = 0x11,
  PB_2  = 0x12,
  PB_3  = 0x13,
  PB_4  = 0x14,
  PB_5  = 0x15,
  PB_6  = 0x16,
  PB_7  = 0x17,
    PB_8  = 0x18,
    PB_9  = 0x19,
    PB_10 = 0x1A,
    PB_11 = 0x1B,
    PB_12 = 0x1C,
    PB_13 = 0x1D,
    PB_14 = 0x1E,
    PB_15 = 0x1F,

    PC_0  = 0x20,
    PC_1  = 0x21,
    PC_2  = 0x22,
    PC_3  = 0x23,
    PC_4  = 0x24,
    PC_5  = 0x25,
    PC_6  = 0x26,
    PC_7  = 0x27,
    PC_8  = 0x28,
    PC_9  = 0x29,
    PC_10 = 0x2A,
    PC_11 = 0x2B,
    PC_12 = 0x2C,
    PC_13 = 0x2D,
  PC_14 = 0x2E,
  PC_15 = 0x2F,
 PD_2  = 0x32,
  // ADC internal channels
  ADC_TEMP = 0xF0,
  ADC_VREF = 0xF1,
  ADC_VBAT = 0xF2,
#if 0
  // Arduino connector namings
  A0          = PA_0,
  A1          = PA_1,
  A2          = PA_3,
  A3          = PA_4,
  A4          = PA_5,
  A5          = PA_6,
  A6          = PA_7,
  A7          = PA_2,
  D0          = PA_10,
  D1          = PA_9,
  D2          = PA_12,
  D3          = PB_0,
  D4          = PB_7,
  D5          = PB_6,
  D6          = PB_1,
  D7          = PC_14,
  D8          = PC_15,
  D9          = PA_8,
  D10         = PA_11,
  D11         = PB_5,
  D12         = PB_4,
  D13         = PB_3,
#else
	 // Arduino connector namings(STM32L4X series)
  A0          = PC_14,  //rst
  A1          = PA_1,
  A2          = PA_4,
  A3          = PB_0,   //falke dio4_b,
  A4          = PC_15,  //rxtx
  A5          = PC_0,
  D0          = PA_3,
  D1          = PA_2,
  D2          = PC_13,
  D3          = PB_8,
  D4          = PB_7,
  D5          = PD_2, //dio3
  D6          = PB_10,
  D7          = PA_8,
  D8          = PC_11,  //dio4
  D9          = PC_10,  //dio5
  D10         = PA_15,  //nss
  D11         = PB_5,   //mosi
  D12         = PB_4,   //miso
  D13         = PB_3,   //sclk
  
#endif
  // Generic signals namings
  LED1        = PB_3,
  LED2        = PB_3,
  LED3        = PB_3,
  LED4        = PB_3,
  SERIAL_TX   = PA_9,
  SERIAL_RX   = PA_10,
  USBTX       = PA_9,
  USBRX       = PA_10,
  I2C_SCL     = PB_6,
  I2C_SDA     = PB_7,
  SPI_MOSI    = PB_5,
  SPI_MISO    = PB_4,
  SPI_SCK     = PB_3,
  SPI_CS      = PA_11,
  PWM_OUT     = PA_5,

  // Not connected
  NC = (int)0xFFFFFFFF
} PinName;

#ifdef __cplusplus
}
#endif

#endif
