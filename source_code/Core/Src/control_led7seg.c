/*
 * control_led7seg.c
 *
 *  Created on: Oct 28, 2023
 *      Author: ASUS TUF GAMING
 */
#include "control_led7seg.h"

int enable_seg = 0;
void control_led7seg(){
	if(timer2_flag == 1){
		enable_seg = 1 - enable_seg;
		setTimer2(250);//0.25s
		if(enable_seg == 0){
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			display7SEG1(time_road1 % 10);
			display7SEG2(time_road2 % 10);
		}
		else {
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			display7SEG1(time_road1 / 10);
			display7SEG2(time_road2 / 10);
		}
	}
}
void led7seg1_on(){
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
}


