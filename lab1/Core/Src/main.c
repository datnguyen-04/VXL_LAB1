/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	//TO DO ex5
	int led_status_UD = RED_ON;
	int led_status_RL = GREEN_ON;
	int counter_UD = 6;
	int counter_RL = 3;

	void display7SEG_UD(int num) {
			switch (num) {
				case 0:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, SET);
					break;
				case 1:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, SET);
					break;
				case 2:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, RESET);
					break;
				case 3:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, RESET);
					break;
				case 4:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, RESET);
					break;
				case 5:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, RESET);
					break;
				case 6:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, RESET);
					break;
				case 7:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, SET);
					break;
				case 8:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, RESET);
					break;
				case 9:
					HAL_GPIO_WritePin(SEG_UD_a_GPIO_Port, SEG_UD_a_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_b_GPIO_Port, SEG_UD_b_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_c_GPIO_Port, SEG_UD_c_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_d_GPIO_Port, SEG_UD_d_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_e_GPIO_Port, SEG_UD_e_Pin, SET);
					HAL_GPIO_WritePin(SEG_UD_f_GPIO_Port, SEG_UD_f_Pin, RESET);
					HAL_GPIO_WritePin(SEG_UD_g_GPIO_Port, SEG_UD_g_Pin, RESET);
					break;
				default:
					break;
			}
		}

	void display7SEG_RL(int num) {
				switch (num) {
					case 0:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, SET);
						break;
					case 1:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, SET);
						break;
					case 2:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, RESET);
						break;
					case 3:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, RESET);
						break;
					case 4:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, RESET);
						break;
					case 5:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, RESET);
						break;
					case 6:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, RESET);
						break;
					case 7:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, SET);
						break;
					case 8:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, RESET);
						break;
					case 9:
						HAL_GPIO_WritePin(SEG_RL_a_GPIO_Port, SEG_RL_a_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_b_GPIO_Port, SEG_RL_b_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_c_GPIO_Port, SEG_RL_c_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_d_GPIO_Port, SEG_RL_d_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_e_GPIO_Port, SEG_RL_e_Pin, SET);
						HAL_GPIO_WritePin(SEG_RL_f_GPIO_Port, SEG_RL_f_Pin, RESET);
						HAL_GPIO_WritePin(SEG_RL_g_GPIO_Port, SEG_RL_g_Pin, RESET);
						break;
					default:
						break;
				}
			}

	void init_exercise5() {
	}
	void red_on_UD() {
        HAL_GPIO_WritePin(LED_RED_UP_GPIO_Port, LED_RED_UP_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(LED_YELLOW_UP_GPIO_Port, LED_YELLOW_UP_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(LED_GREEN_UP_GPIO_Port, LED_GREEN_UP_Pin, GPIO_PIN_RESET);

        HAL_GPIO_WritePin(LED_RED_DOWN_GPIO_Port, LED_RED_DOWN_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(LED_YELLOW_DOWN_GPIO_Port, LED_YELLOW_DOWN_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(LED_GREEN_DOWN_GPIO_Port, LED_GREEN_DOWN_Pin, GPIO_PIN_RESET);
	}
	void yellow_on_UD() {
		HAL_GPIO_WritePin(LED_RED_UP_GPIO_Port, LED_RED_UP_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_UP_GPIO_Port, LED_YELLOW_UP_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_UP_GPIO_Port, LED_GREEN_UP_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(LED_RED_DOWN_GPIO_Port, LED_RED_DOWN_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_DOWN_GPIO_Port, LED_YELLOW_DOWN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_DOWN_GPIO_Port, LED_GREEN_DOWN_Pin, GPIO_PIN_RESET);
	}
	void green_on_UD() {
		HAL_GPIO_WritePin(LED_RED_UP_GPIO_Port, LED_RED_UP_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_UP_GPIO_Port, LED_YELLOW_UP_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_UP_GPIO_Port, LED_GREEN_UP_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(LED_RED_DOWN_GPIO_Port, LED_RED_DOWN_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_DOWN_GPIO_Port, LED_YELLOW_DOWN_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_DOWN_GPIO_Port, LED_GREEN_DOWN_Pin, GPIO_PIN_SET);
	}


	void red_on_RL() {
		HAL_GPIO_WritePin(LED_RED_RIGHT_GPIO_Port, LED_RED_RIGHT_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_RIGHT_GPIO_Port, LED_YELLOW_RIGHT_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_RIGHT_GPIO_Port, LED_GREEN_RIGHT_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(LED_RED_LEFT_GPIO_Port, LED_RED_LEFT_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_LEFT_GPIO_Port, LED_YELLOW_LEFT_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_LEFT_GPIO_Port, LED_GREEN_LEFT_Pin, GPIO_PIN_RESET);
	}
	void yellow_on_RL() {
		HAL_GPIO_WritePin(LED_RED_RIGHT_GPIO_Port, LED_RED_RIGHT_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_RIGHT_GPIO_Port, LED_YELLOW_RIGHT_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_RIGHT_GPIO_Port, LED_GREEN_RIGHT_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(LED_RED_LEFT_GPIO_Port, LED_RED_LEFT_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_LEFT_GPIO_Port, LED_YELLOW_LEFT_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_LEFT_GPIO_Port, LED_GREEN_LEFT_Pin, GPIO_PIN_RESET);
	}
	void green_on_RL() {
		HAL_GPIO_WritePin(LED_RED_RIGHT_GPIO_Port, LED_RED_RIGHT_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_RIGHT_GPIO_Port, LED_YELLOW_RIGHT_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_RIGHT_GPIO_Port, LED_GREEN_RIGHT_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(LED_RED_LEFT_GPIO_Port, LED_RED_LEFT_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_LEFT_GPIO_Port, LED_YELLOW_LEFT_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_LEFT_GPIO_Port, LED_GREEN_LEFT_Pin, GPIO_PIN_SET);
	}
	void exercise5_run() {
		switch(led_status_UD) {
				  case RED_ON:
					  red_on_UD();
					  display7SEG_UD(counter_UD--);
					  if (counter_UD <= -1) {
						  led_status_UD = GREEN_ON;
						  counter_UD = 3;
					  }
					  break;
				  case YELLOW_ON:
					  yellow_on_UD();
					  display7SEG_UD(counter_UD--);
					  if (counter_UD <= -1) {
						  led_status_UD = RED_ON;
						  counter_UD = 6;
					  }
					  break;
				  case GREEN_ON:
					  green_on_UD();
					  display7SEG_UD(counter_UD--);
					  if (counter_UD <= -1) {
						  led_status_UD = YELLOW_ON;
						  counter_UD = 2;
					  }
					  break;
				  default:
					  break;
		}


		switch(led_status_RL) {
						  case RED_ON:
							  red_on_RL();
							  display7SEG_RL(counter_RL--);
							  if (counter_RL <= -1) {
								  led_status_RL = GREEN_ON;
								  counter_RL = 3;
							  }
							  break;
						  case YELLOW_ON:
							  yellow_on_RL();
							  display7SEG_RL(counter_RL--);
							  if (counter_RL <= -1) {
								  led_status_RL = RED_ON;
								  counter_RL = 6;
							  }
							  break;
						  case GREEN_ON:
							  green_on_RL();
							  display7SEG_RL(counter_RL--);
							  if (counter_RL <= -1) {
								  led_status_RL = YELLOW_ON;
								  counter_RL = 2;
							  }
							  break;
						  default:
							  break;
		}

	}
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  init_exercise5();
  while (1)
  {
	  HAL_GPIO_TogglePin(LED_BLINKY_GPIO_Port, LED_BLINKY_Pin);
	  exercise5_run();
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEG_RL_a_Pin|SEG_RL_b_Pin|SEG_RL_c_Pin|LED_BLINKY_Pin
                          |SEG_UD_a_Pin|SEG_UD_b_Pin|SEG_UD_c_Pin|SEG_UD_d_Pin
                          |SEG_UD_e_Pin|SEG_UD_f_Pin|SEG_UD_g_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_RED_UP_Pin|LED_YELLOW_UP_Pin|LED_GREEN_UP_Pin|LED_YELLOW_LEFT_Pin
                          |LED_GREEN_LEFT_Pin|SEG_RL_d_Pin|SEG_RL_e_Pin|SEG_RL_f_Pin
                          |SEG_RL_g_Pin|LED_RED_RIGHT_Pin|LED_YELLOW_RIGHT_Pin|LED_GREEN_RIGHT_Pin
                          |LED_YELLOW_DOWN_Pin|LED_GREEN_DOWN_Pin|LED_RED_LEFT_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : SEG_RL_a_Pin SEG_RL_b_Pin SEG_RL_c_Pin LED_BLINKY_Pin
                           SEG_UD_a_Pin SEG_UD_b_Pin SEG_UD_c_Pin SEG_UD_d_Pin
                           SEG_UD_e_Pin SEG_UD_f_Pin SEG_UD_g_Pin */
  GPIO_InitStruct.Pin = SEG_RL_a_Pin|SEG_RL_b_Pin|SEG_RL_c_Pin|LED_BLINKY_Pin
                          |SEG_UD_a_Pin|SEG_UD_b_Pin|SEG_UD_c_Pin|SEG_UD_d_Pin
                          |SEG_UD_e_Pin|SEG_UD_f_Pin|SEG_UD_g_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_RED_UP_Pin LED_YELLOW_UP_Pin LED_GREEN_UP_Pin LED_YELLOW_LEFT_Pin
                           LED_GREEN_LEFT_Pin SEG_RL_d_Pin SEG_RL_e_Pin SEG_RL_f_Pin
                           SEG_RL_g_Pin LED_RED_RIGHT_Pin LED_YELLOW_RIGHT_Pin LED_GREEN_RIGHT_Pin
                           LED_YELLOW_DOWN_Pin LED_GREEN_DOWN_Pin LED_RED_LEFT_Pin */
  GPIO_InitStruct.Pin = LED_RED_UP_Pin|LED_YELLOW_UP_Pin|LED_GREEN_UP_Pin|LED_YELLOW_LEFT_Pin
                          |LED_GREEN_LEFT_Pin|SEG_RL_d_Pin|SEG_RL_e_Pin|SEG_RL_f_Pin
                          |SEG_RL_g_Pin|LED_RED_RIGHT_Pin|LED_YELLOW_RIGHT_Pin|LED_GREEN_RIGHT_Pin
                          |LED_YELLOW_DOWN_Pin|LED_GREEN_DOWN_Pin|LED_RED_LEFT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : LED_RED_DOWN_Pin */
  GPIO_InitStruct.Pin = LED_RED_DOWN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(LED_RED_DOWN_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
