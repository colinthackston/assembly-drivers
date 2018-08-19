/**
  ******************************************************************************
  * File Name          : mxconstants.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
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
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MXCONSTANT_H
#define __MXCONSTANT_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define DEBUG_TRACECLK_Pin GPIO_PIN_2
#define DEBUG_TRACECLK_GPIO_Port GPIOE
#define DEBUG_TRACE_D0_Pin GPIO_PIN_3
#define DEBUG_TRACE_D0_GPIO_Port GPIOE
#define DEBUG_TRACE_D1_Pin GPIO_PIN_4
#define DEBUG_TRACE_D1_GPIO_Port GPIOE
#define DEBUG_TRACE_D2_Pin GPIO_PIN_5
#define DEBUG_TRACE_D2_GPIO_Port GPIOE
#define DEBUG_TRACE_D3_Pin GPIO_PIN_6
#define DEBUG_TRACE_D3_GPIO_Port GPIOE
#define GPS_NMEA_TX_Pin GPIO_PIN_3
#define GPS_NMEA_TX_GPIO_Port GPIOA
#define ACCEL_SCK_Pin GPIO_PIN_5
#define ACCEL_SCK_GPIO_Port GPIOA
#define ACCEL_MISO_Pin GPIO_PIN_6
#define ACCEL_MISO_GPIO_Port GPIOA
#define ACCEL_MOSI_Pin GPIO_PIN_7
#define ACCEL_MOSI_GPIO_Port GPIOA
#define ACCEL_CS_Pin GPIO_PIN_4
#define ACCEL_CS_GPIO_Port GPIOC
#define ACCEL_INT1_Pin GPIO_PIN_5
#define ACCEL_INT1_GPIO_Port GPIOC
#define ACCEL_INT2_Pin GPIO_PIN_0
#define ACCEL_INT2_GPIO_Port GPIOB
#define GPS_SECOND_Pin GPIO_PIN_1
#define GPS_SECOND_GPIO_Port GPIOB
#define FLASH_POWER_EN_Pin GPIO_PIN_2
#define FLASH_POWER_EN_GPIO_Port GPIOB
#define FLASH_WP_Pin GPIO_PIN_7
#define FLASH_WP_GPIO_Port GPIOE
#define FLASH_HOLD_Pin GPIO_PIN_8
#define FLASH_HOLD_GPIO_Port GPIOE
#define FLASH_CS_Pin GPIO_PIN_9
#define FLASH_CS_GPIO_Port GPIOE
#define VIN_MEAS_EN_Pin GPIO_PIN_10
#define VIN_MEAS_EN_GPIO_Port GPIOE
#define GPS_HS_SS_Pin GPIO_PIN_11
#define GPS_HS_SS_GPIO_Port GPIOE
#define GPS_HS_CLK_Pin GPIO_PIN_12
#define GPS_HS_CLK_GPIO_Port GPIOE
#define GPS_HS_SIGN_Pin GPIO_PIN_13
#define GPS_HS_SIGN_GPIO_Port GPIOE
#define GPS_TRIG_TIMESTAMP_Pin GPIO_PIN_14
#define GPS_TRIG_TIMESTAMP_GPIO_Port GPIOE
#define GPS_PROG_TX_Pin GPIO_PIN_15
#define GPS_PROG_TX_GPIO_Port GPIOE
#define GPS_PROG_RX_Pin GPIO_PIN_10
#define GPS_PROG_RX_GPIO_Port GPIOB
#define GPS_POWER_EN_Pin GPIO_PIN_11
#define GPS_POWER_EN_GPIO_Port GPIOB
#define SDCARD_CS_Pin GPIO_PIN_12
#define SDCARD_CS_GPIO_Port GPIOB
#define SDCARD_SCK_Pin GPIO_PIN_13
#define SDCARD_SCK_GPIO_Port GPIOB
#define SDCARD_MISO_Pin GPIO_PIN_14
#define SDCARD_MISO_GPIO_Port GPIOB
#define SDCARD_MOSI_Pin GPIO_PIN_15
#define SDCARD_MOSI_GPIO_Port GPIOB
#define SDCARD_DETECT_OUT_Pin GPIO_PIN_8
#define SDCARD_DETECT_OUT_GPIO_Port GPIOD
#define SDCARD_DETECT_IN_Pin GPIO_PIN_9
#define SDCARD_DETECT_IN_GPIO_Port GPIOD
#define SDCARD_POWER_EN_Pin GPIO_PIN_10
#define SDCARD_POWER_EN_GPIO_Port GPIOD
#define BTLE_RTS_Pin GPIO_PIN_11
#define BTLE_RTS_GPIO_Port GPIOD
#define VIN_MEAS_A2D_Pin GPIO_PIN_12
#define VIN_MEAS_A2D_GPIO_Port GPIOD
#define IMEAS_IN__Pin GPIO_PIN_13
#define IMEAS_IN__GPIO_Port GPIOD
#define IMEAS_GAIN0_OUT_Pin GPIO_PIN_14
#define IMEAS_GAIN0_OUT_GPIO_Port GPIOD
#define IMEAS_GAIN1_OUT_Pin GPIO_PIN_15
#define IMEAS_GAIN1_OUT_GPIO_Port GPIOD
#define CHARGER_PGOOD_Pin GPIO_PIN_6
#define CHARGER_PGOOD_GPIO_Port GPIOC
#define CHARGER_CE_Pin GPIO_PIN_7
#define CHARGER_CE_GPIO_Port GPIOC
#define CHARGER_ISET2_Pin GPIO_PIN_8
#define CHARGER_ISET2_GPIO_Port GPIOC
#define CHARGER_STAT2_Pin GPIO_PIN_9
#define CHARGER_STAT2_GPIO_Port GPIOC
#define CHARGER_STAT1_Pin GPIO_PIN_8
#define CHARGER_STAT1_GPIO_Port GPIOA
#define CONSOLE_TX_Pin GPIO_PIN_9
#define CONSOLE_TX_GPIO_Port GPIOA
#define CONSOLE_RX_Pin GPIO_PIN_10
#define CONSOLE_RX_GPIO_Port GPIOA
#define DEBUG_SWDIO_JTMS_Pin GPIO_PIN_13
#define DEBUG_SWDIO_JTMS_GPIO_Port GPIOA
#define BTLE_CTS_Pin GPIO_PIN_6
#define BTLE_CTS_GPIO_Port GPIOF
#define DEBUG_SWCLK_JTCK_Pin GPIO_PIN_14
#define DEBUG_SWCLK_JTCK_GPIO_Port GPIOA
#define DEBUG_JTDI_Pin GPIO_PIN_15
#define DEBUG_JTDI_GPIO_Port GPIOA
#define BTLE_SCK_Pin GPIO_PIN_10
#define BTLE_SCK_GPIO_Port GPIOC
#define BTLE_MISO_Pin GPIO_PIN_11
#define BTLE_MISO_GPIO_Port GPIOC
#define BTLE_MOSI_Pin GPIO_PIN_12
#define BTLE_MOSI_GPIO_Port GPIOC
#define BTLE_CS_Pin GPIO_PIN_0
#define BTLE_CS_GPIO_Port GPIOD
#define BTLE_INT_Pin GPIO_PIN_1
#define BTLE_INT_GPIO_Port GPIOD
#define BTLE_DFU_Pin GPIO_PIN_2
#define BTLE_DFU_GPIO_Port GPIOD
#define BTLE_FACTORY_RESET_Pin GPIO_PIN_3
#define BTLE_FACTORY_RESET_GPIO_Port GPIOD
#define BTLE_POWER_EN_Pin GPIO_PIN_4
#define BTLE_POWER_EN_GPIO_Port GPIOD
#define SYSTEM_POWER_LATCH_Pin GPIO_PIN_5
#define SYSTEM_POWER_LATCH_GPIO_Port GPIOD
#define SYSTEM_POWER_SWITCH_STATE_Pin GPIO_PIN_6
#define SYSTEM_POWER_SWITCH_STATE_GPIO_Port GPIOD
#define DEBUG_GNDDETECT_Pin GPIO_PIN_7
#define DEBUG_GNDDETECT_GPIO_Port GPIOD
#define DEBUG_JTDO_TRACESWO_Pin GPIO_PIN_3
#define DEBUG_JTDO_TRACESWO_GPIO_Port GPIOB
#define DEBUG_TRST_Pin GPIO_PIN_4
#define DEBUG_TRST_GPIO_Port GPIOB
#define BUTTON_EXTERNAL_Pin GPIO_PIN_5
#define BUTTON_EXTERNAL_GPIO_Port GPIOB
#define BUTTON_PCB_Pin GPIO_PIN_6
#define BUTTON_PCB_GPIO_Port GPIOB
#define LED_OUT_Pin GPIO_PIN_7
#define LED_OUT_GPIO_Port GPIOB
#define BTLE_TX_Pin GPIO_PIN_8
#define BTLE_TX_GPIO_Port GPIOB
#define BTLE_RXD_Pin GPIO_PIN_9
#define BTLE_RXD_GPIO_Port GPIOB
#define BTLE_MODE_Pin GPIO_PIN_0
#define BTLE_MODE_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MXCONSTANT_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
