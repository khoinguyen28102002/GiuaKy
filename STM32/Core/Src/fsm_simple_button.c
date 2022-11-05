/*
 * fsm_simple_button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: USER
 */


#include "fsm_simple_button.h"
#include "global.h"
void fsm_simple_button_run(){
	switch (status) {
		case INIT:
			if(count > 9){
				count = 0;
			}
			if(count < 0){
				count = 9;
			}
			display7SEG(count);
			if(ResetButtonIsPressed()){
				status = RESET_STATE;
				setTimer1(10000);
			}
			if(IncButtonIsPressed()){
				status = INC_STATE;
				setTimer1(10000);
			}
			if(DecButtonIsPressed()){
				status = DEC_STATE;
				setTimer1(10000);
			}
			if(!ResetButtonIsPressed() && !IncButtonIsPressed() && !DecButtonIsPressed()){
				if(timer1_flag == 1){
					setTimer1(1000);
					if(count == 0)
						status = INIT;
					else{
						status = NOT_PRESSED_STATE;
					}
				}
			}
			if(timer2_flag == 1){
				HAL_GPIO_TogglePin(GPIOA, LED_Pin);
				setTimer2(1000);
			}
			break;
		case RESET_STATE:
			count = 0;
			status = INIT;
			break;
		case INC_STATE:
			count++;
			if(count >= 10)
				count = 0;
			status = INIT;
			break;
		case DEC_STATE:
			count--;
			if(count < 0)
				count = 9;
			status = INIT;
			break;
		case NOT_PRESSED_STATE:
			count--;
			status = INIT;
		default:
			break;
	}
}
