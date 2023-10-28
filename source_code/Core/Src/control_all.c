/*
 * control_all.c
 *
 *  Created on: Oct 28, 2023
 *      Author: ASUS TUF GAMING
 */
#include "control_all.h"

int temp_change_time = 0;
void count_time(){
	if(timer1_flag == 1){
		setTimer1(1000); //1s
		time_road1--;
		time_road2--;
	}
}
void set_normal_mode(){
	state_lightTraffic = RED1_GREEN2;
	time_road1 = time_red1;
	time_road2 = time_green2;

}
void set_red_mode(){
	reset_all_button();
	HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
	HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
	temp_change_time = time_red1;
	time_road1 = time_red1;
	time_road2 = temp_change_time;
}
void set_yellow_mode(){
	HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, SET);
	HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
	HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, SET);
	HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
	temp_change_time = time_yellow1;
	time_road1 = time_yellow1;
	time_road2 = temp_change_time;
}
void set_green_mode(){
	reset_all_button();
	HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, SET);
	HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, RESET);
	HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, SET);
	HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, RESET);
	temp_change_time = time_green1;
	time_road1 = time_green1;
	time_road2 = temp_change_time;
}

void blink_red(){
	if(timer3_flag == 1){
		setTimer3(250);//0.25s
		HAL_GPIO_TogglePin(LED1_RED_GPIO_Port, LED1_RED_Pin);
		HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
		HAL_GPIO_TogglePin(LED2_RED_GPIO_Port, LED2_RED_Pin);
		HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
	}
}
void blink_yellow(){
	if(timer3_flag == 1){
		setTimer3(250);//0.25s
		HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, SET);
		HAL_GPIO_TogglePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin);
		HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, SET);
		HAL_GPIO_TogglePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin);
		HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
	}
}
void blink_green(){
	if(timer3_flag == 1){
		setTimer3(250);//0.25s
		HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, SET);
		HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
		HAL_GPIO_TogglePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin);
		HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, SET);
		HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
		HAL_GPIO_TogglePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin);
	}
}

void control_all(){
	switch(status){
	case INIT:
		status = NORMAL_MODE;
		setTimer1(1000);//1s
		setTimer2(250);
		set_normal_mode();
		break;
	case NORMAL_MODE:
		count_time();
		control_lightTraffic();
		control_led7seg();
		//change mode
		if(is_button_pressed_once(0) || is_button_pressed_hold(0)){
			status = SET_RED_MODE;
			setTimer2(250);
			setTimer3(250);//0.25s
			set_red_mode();
		}
		break;
	case SET_RED_MODE:
		control_led7seg();
		blink_red();
		if(is_button_pressed_once(0) || is_button_pressed_hold(0)){
			status = SET_YELLOW_MODE;
			setTimer2(250);
			setTimer3(250);//0.25s
			set_yellow_mode();
		}
		break;
	case SET_YELLOW_MODE:
		control_led7seg();
		blink_yellow();
		if(is_button_pressed_once(0) || is_button_pressed_hold(0)){
			status = SET_GREEN_MODE;
			setTimer2(250);
			setTimer3(250);//0.25s
			set_green_mode();
		}
		break;
	case SET_GREEN_MODE:
		control_led7seg();
		blink_green();
		if(is_button_pressed_once(0) || is_button_pressed_hold(0)){
			status = NORMAL_MODE;
			setTimer1(1000);
			setTimer2(250);
			set_normal_mode();
		}
		break;
	default:
		break;
	}
}

