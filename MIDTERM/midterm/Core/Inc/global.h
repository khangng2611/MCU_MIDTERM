/*
 * global.h
 *
 *  Created on: Nov 4, 2022
 *      Author: HP
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include"timer.h"

#define INIT 1
#define RESET_STATE 2
#define INC 3
#define DEC 4
#define LONG_PRESSED_INC 5
#define LONG_PRESSED_DEC 6
#define AUTO 7

extern int status;
extern int count;
extern int count_long_pressed;


#endif /* INC_GLOBAL_H_ */
