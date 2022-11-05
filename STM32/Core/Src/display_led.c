/*
 * display_led.c
 *
 *  Created on: Nov 5, 2022
 *      Author: USER
 */

#ifndef SRC_DISPLAY_LED_C_
#define SRC_DISPLAY_LED_C_
#include "main.h"

void display7SEG(int num){
	if(num == 0){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, 1);
	}
	else if(num == 1){
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin|SEG2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG6_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin, 1);
	}
	else if(num == 2){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG6_Pin|SEG3_Pin|SEG4_Pin|SEG1_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin|SEG2_Pin, 1);
	}
	else if(num == 3){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG6_Pin|SEG3_Pin|SEG1_Pin|SEG2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin|SEG5_Pin, 1);
	}
	else if(num == 4){
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin|SEG1_Pin|SEG2_Pin|SEG6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG3_Pin|SEG4_Pin, 1);
	}
	else if(num == 5){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG6_Pin|SEG3_Pin|SEG5_Pin|SEG2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin|SEG1_Pin, 1);
	}
	else if(num == 6){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG6_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, 1);
	}
	else if(num == 7){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin, 1);
	}
	else if(num == 8){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG6_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG1_Pin|SEG2_Pin, 0);
	}
	else if(num == 9){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG6_Pin|SEG3_Pin|SEG1_Pin|SEG2_Pin|SEG5_Pin|SEG1_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, 1);
	}
}



#endif /* SRC_DISPLAY_LED_C_ */
