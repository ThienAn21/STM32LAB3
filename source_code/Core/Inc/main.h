/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SEG1_A_Pin GPIO_PIN_1
#define SEG1_A_GPIO_Port GPIOA
#define SEG1_B_Pin GPIO_PIN_2
#define SEG1_B_GPIO_Port GPIOA
#define SEG1_C_Pin GPIO_PIN_3
#define SEG1_C_GPIO_Port GPIOA
#define SEG1_D_Pin GPIO_PIN_4
#define SEG1_D_GPIO_Port GPIOA
#define SEG1_E_Pin GPIO_PIN_5
#define SEG1_E_GPIO_Port GPIOA
#define SEG1_F_Pin GPIO_PIN_6
#define SEG1_F_GPIO_Port GPIOA
#define SEG1_G_Pin GPIO_PIN_7
#define SEG1_G_GPIO_Port GPIOA
#define SEG2_A_Pin GPIO_PIN_0
#define SEG2_A_GPIO_Port GPIOB
#define SEG2_B_Pin GPIO_PIN_1
#define SEG2_B_GPIO_Port GPIOB
#define SEG2_C_Pin GPIO_PIN_2
#define SEG2_C_GPIO_Port GPIOB
#define LED1_RED_Pin GPIO_PIN_8
#define LED1_RED_GPIO_Port GPIOA
#define LED1_AMBER_Pin GPIO_PIN_9
#define LED1_AMBER_GPIO_Port GPIOA
#define LED1_GREEN_Pin GPIO_PIN_10
#define LED1_GREEN_GPIO_Port GPIOA
#define ENM0_Pin GPIO_PIN_11
#define ENM0_GPIO_Port GPIOA
#define ENM1_Pin GPIO_PIN_12
#define ENM1_GPIO_Port GPIOA
#define BUTTON_MODE_Pin GPIO_PIN_13
#define BUTTON_MODE_GPIO_Port GPIOA
#define BUTTON_TIME_Pin GPIO_PIN_14
#define BUTTON_TIME_GPIO_Port GPIOA
#define BUTTON_SET_Pin GPIO_PIN_15
#define BUTTON_SET_GPIO_Port GPIOA
#define SEG2_D_Pin GPIO_PIN_3
#define SEG2_D_GPIO_Port GPIOB
#define SEG2_E_Pin GPIO_PIN_4
#define SEG2_E_GPIO_Port GPIOB
#define SEG2_F_Pin GPIO_PIN_5
#define SEG2_F_GPIO_Port GPIOB
#define SEG2_G_Pin GPIO_PIN_6
#define SEG2_G_GPIO_Port GPIOB
#define LED2_RED_Pin GPIO_PIN_7
#define LED2_RED_GPIO_Port GPIOB
#define LED2_AMBER_Pin GPIO_PIN_8
#define LED2_AMBER_GPIO_Port GPIOB
#define LED2_GREEN_Pin GPIO_PIN_9
#define LED2_GREEN_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
