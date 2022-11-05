/*
 * button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: HP
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"
#include "led_display.h"

#define NO_OF_BUTTONS 3
#define DURATION_FOR_AUTO_INCREASING 100
//#define DURATION_FOR_DOUBLE_CLICK 50
#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button_flag[NO_OF_BUTTONS];
extern int button_flag_longpressed[NO_OF_BUTTONS];
//extern int button_flag_doublepressed[NO_OF_BUTTONS];

int isButtonPressed(int index);
int isButtonLongPressed(int index);
//int isButtonDoublePressed(int index);
void getKeyInput();

#endif /* INC_BUTTON_H_ */
