/*
 * led_display.h
 *
 *  Created on: Nov 4, 2022
 *      Author: HP
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include"main.h"
#include"global.h"
#define SEG7_PORT GPIOB

void display7SEG(int num);
void led_blinky();

#endif /* INC_LED_DISPLAY_H_ */