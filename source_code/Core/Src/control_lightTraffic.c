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
		red1_green2();
		if(time_road2 <= 0){
			state_lightTraffic = RED1_YELLOW2;
			setTimer1(1000);//1s
			time_road1 = time_road1;
			time_road2 = time_yellow2;
		}
		break;
	case RED1_YELLOW2:
		red1_yellow2();
		if(time_road2 <= 0){
			state_lightTraffic = GREEN1_RED2;
			setTimer1(1000);//1s
			time_road1 = time_green1;
			time_road2 = time_red2;
		}
		break;
	case GREEN1_RED2:
		green1_red2();
		if(time_road1 <= 0){
			state_lightTraffic = YELLOW1_RED2;
			setTimer1(1000);//1s
			time_road1 = time_yellow1;
			time_road2 = time_road2;
		}
		break;
	case YELLOW1_RED2:
		yellow1_red2();
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

void blink_red(){
	if(timer3_flag == 1){
		setTimer3(250);//0.25s
		control_blink_red();
	}
}
void blink_yellow(){
	if(timer3_flag == 1){
		setTimer3(250);//0.25s
		control_blink_yellow();
	}
}
void blink_green(){
	if(timer3_flag == 1){
		setTimer3(250);//0.25s
		control_blink_green();
	}
}

