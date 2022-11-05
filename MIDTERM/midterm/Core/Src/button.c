/*
 * button.c
 *
 *  Created on: Nov 4, 2022
 *      Author: HP
 */


#include"button.h"

int TimeOutForKeyPress[NO_OF_BUTTONS] =  {DURATION_FOR_AUTO_INCREASING,DURATION_FOR_AUTO_INCREASING,DURATION_FOR_AUTO_INCREASING};
//int TimeOutForDoubleClick[NO_OF_BUTTONS] = {0,0,0};
int button_flag[NO_OF_BUTTONS] = {0,0,0};
int button_flag_longpressed[NO_OF_BUTTONS] = {0,0,0};
//int button_flag_doublepressed[NO_OF_BUTTONS] = {0,0,0};

int KeyReg0[NO_OF_BUTTONS] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg1[NO_OF_BUTTONS] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg2[NO_OF_BUTTONS] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg3[NO_OF_BUTTONS] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};

int isButtonPressed(int index) {
	if (button_flag[index] == 1) {
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

int isButtonLongPressed(int index) {
	if (button_flag_longpressed[index] == 1) {
		return 1;
	}
	return 0;
}

//int isButtonDoublePressed(int index) {
//	if (button_flag_doublepressed[index] == 1) {
//		return 1;
//	}
//	return 0;
//}

void subKeyProcess(int index){
	button_flag[index] = 1;
//	if (TimeOutForDoubleClick[index] > 0) {
//   		button_flag_doublepressed[index] = 1;
//	}
//  	else {
//  		TimeOutForDoubleClick[index] = DURATION_FOR_DOUBLE_CLICK;
//   		button_flag_doublepressed[index] = 0;
//  	}
}
//nhieu nut nhan, dung mang, o ham HALGPIOReadPin dung them if de phan loai nut, sau do for cho full ham getKeyInput() (xem them tren Internet)
void getKeyInput(){
  for (int i = 0; i < NO_OF_BUTTONS; i++) {
	  KeyReg2[i] = KeyReg1[i];
	  KeyReg1[i] = KeyReg0[i];
	  switch (i) {
	  		case 0:
	  			KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin) ;
	  			break;
	  		case 1:
	  			KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin) ;
	  			break;
	  		case 2:
	  			KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin) ;
	  			break;
	  }
	  if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
	    if (KeyReg2[i] == NORMAL_STATE) {
			//to reset lonngpressed flag
	    	button_flag_longpressed[i] = 0;
	    }

	    //count for double click
	    //TimeOutForDoubleClick[i] --;

	    if (KeyReg2[i] != KeyReg3[i]){
	      KeyReg3[i] = KeyReg2[i];
	      if (KeyReg2[i] == PRESSED_STATE){
	        subKeyProcess(i);
	        TimeOutForKeyPress[i] = DURATION_FOR_AUTO_INCREASING;
	      }
	    }
	    else {
	        TimeOutForKeyPress[i] --;
	        if (TimeOutForKeyPress[i] == 0){
	          KeyReg3[i] = NORMAL_STATE;
	          button_flag_longpressed[i] = 1;
	        }
	    }
	  }
  }
}
