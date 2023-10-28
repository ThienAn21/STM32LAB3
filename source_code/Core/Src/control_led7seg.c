/*
 * control_led7seg.c
 *
 *  Created on: Oct 28, 2023
 *      Author: ASUS TUF GAMING
 */
#include "control_led7seg.h"

  void display7SEG1(int state){
	  switch(state){
	  case 0:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		  break;
	  default:
	  		  break;
	  }
  }
  void display7SEG2(int state){
	  switch(state){
	  case 0:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(SEG2_A_GPIO_Port, SEG2_A_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_B_GPIO_Port, SEG2_B_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_C_GPIO_Port, SEG2_C_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_D_GPIO_Port, SEG2_D_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_E_GPIO_Port, SEG2_E_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_F_GPIO_Port, SEG2_F_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_G_GPIO_Port, SEG2_G_Pin, RESET);
		  break;
	  default:
	  		  break;
	  }
  }

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



