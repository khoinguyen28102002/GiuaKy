/*
 * global.h
 *
 *  Created on: 4 thg 11, 2022
 *      Author: USER
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#include "reading_button.h"
#include "software_timer.h"
#include "display_led.h"
#include "main.h"

#define INIT					1
#define RESET_STATE 			2
#define INC_STATE 				3
#define DEC_STATE 				4
#define NOT_PRESSED_STATE		5

int status;
int count;

#endif /* INC_GLOBAL_H_ */
