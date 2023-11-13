/*
 * control_all.c
 *
 *  Created on: Oct 28, 2023
 *      Author: ASUS TUF GAMING
 */
#include "control_all.h"

int temp_change_time = 0;
int time_red_old = 0;
int time_yellow_old = 0;
int time_green_old = 0;
int error_flag = 0;

void set_normal_mode(){
	state_lightTraffic = RED1_GREEN2;
	time_road1 = time_red1;
	time_road2 = time_green2;
	//red1_green2();
}
void set_red_mode(){
	reset_all_button();
	all_red_on();
	temp_change_time = time_red1;
	time_road1 = time_red1;
	time_road2 = temp_change_time;
}
void set_yellow_mode(){
	reset_all_button();
	all_yellow_on();
	temp_change_time = time_yellow1;
	time_road1 = time_yellow1;
	time_road2 = temp_change_time;
}
void set_green_mode(){
	reset_all_button();
	all_green_on();
	temp_change_time = time_green1;
	time_road1 = time_green1;
	time_road2 = temp_change_time;
}
void set_error_mode(){
	all_led_off();
}

void increase_temp_time(){
	temp_change_time++;
	if(temp_change_time >= 100){
		temp_change_time = 1;
	}
	time_road2 = temp_change_time;
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
		if(timer1_flag == 1){
			setTimer1(1000); //1s
			time_road1--;
			time_road2--;
		}
		control_lightTraffic();
		control_led7seg();
		// save old time
		time_red_old = time_red1;
		time_yellow_old = time_yellow1;
		time_green_old = time_green1;
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
		if(is_button_pressed_once(1) || is_button_pressed_hold(1)){
			increase_temp_time();
		}
		if(is_button_pressed_once(2) || is_button_pressed_hold(2)){
			time_red1 = temp_change_time;
			time_red2 = time_red1;
			time_road1 = time_red1;
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
		if(is_button_pressed_once(1) || is_button_pressed_hold(1)){
			increase_temp_time();
		}
		if(is_button_pressed_once(2) || is_button_pressed_hold(2)){
			time_yellow1 = temp_change_time;
			time_yellow2 = time_yellow1;
			time_road1 = time_yellow1;
		}
		break;
	case SET_GREEN_MODE:
		control_led7seg();
		blink_green();
		if(is_button_pressed_once(0) || is_button_pressed_hold(0)){
			status = ERROR_MODE;
			setTimer3(2000);
			set_error_mode();
		}
		if(is_button_pressed_once(1) || is_button_pressed_hold(1)){
			increase_temp_time();
		}
		if(is_button_pressed_once(2) || is_button_pressed_hold(2)){
			time_green1 = temp_change_time;
			time_green2 = time_green1;
			time_road1 = time_green1;
		}
		break;
	case ERROR_MODE:
		// if error, delete all current change then wait 2s before change to normal mode
		// if user press BUTTON_MODE, change to normal mode immediately
		//no error, change to normal mode immediately
		if(time_red1 != (time_yellow1 + time_green1)){
			error_flag = 1;
		}
		if(error_flag == 1){
			time_red1 = time_red_old;
			time_yellow1 = time_yellow_old;
			time_green1 = time_green_old;
			time_red2 = time_red1;
			time_yellow2 = time_yellow1;
			time_green2 = time_green1;
			display7SEG_seg1_on();
			display7SEG_error();
			all_led_off();
			if(is_button_pressed_once(0) || is_button_pressed_hold(0) || timer3_flag == 1){
				error_flag = 0;
				setTimer3(100);
			}
		}
		else{
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

