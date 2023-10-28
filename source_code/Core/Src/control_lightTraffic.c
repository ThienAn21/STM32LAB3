/*
 * control_lightTraffic.c
 *
 *  Created on: Oct 28, 2023
 *      Author: ASUS TUF GAMING
 */
#include "control_lightTraffic.h"

int state_lightTraffic = RED1_GREEN2;


void control_lightTraffic(){

	switch(state_lightTraffic){
	case RED1_GREEN2:
		HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, SET);
		HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, RESET);
		if(time_road2 <= 0){
			state_lightTraffic = RED1_YELLOW2;
			setTimer1(1000);//1s
			time_road1 = time_road1;
			time_road2 = time_yellow2;
		}
		break;
	case RED1_YELLOW2:
		HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, SET);
		HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
		if(time_road2 <= 0){
			state_lightTraffic = GREEN1_RED2;
			setTimer1(1000);//1s
			time_road1 = time_green1;
			time_road2 = time_red2;
		}
		break;
	case GREEN1_RED2:
		HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, SET);
		HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
		if(time_road1 <= 0){
			state_lightTraffic = YELLOW1_RED2;
			setTimer1(1000);//1s
			time_road1 = time_yellow1;
			time_road2 = time_road2;
		}
		break;
	case YELLOW1_RED2:
		HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, SET);
		HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
		if(time_road1 <= 0){
			state_lightTraffic = RED1_GREEN2;
			setTimer1(1000);//1s
			time_road1 = time_red1;
			time_road2 = time_green2;
		}
		break;
	default:
		break;
	}
}

