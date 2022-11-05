/*
 * led_display.c
 *
 *  Created on: Nov 4, 2022
 *      Author: HP
 */

#include"led_display.h"

void display7SEG(int num) {
	switch(num) {
	case 0:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG7_PORT, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_PORT, SEG6_Pin, RESET);
		break;
	}
}

void led_blinky() {
	if (timer2_flag == 1) {
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		setTimer2(1000);
	}
}
