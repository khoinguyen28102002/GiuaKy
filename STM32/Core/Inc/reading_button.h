/*
 * button.h
 *
 *  Created on: 4 thg 11, 2022
 *      Author: USER
 */

#ifndef INC_READING_BUTTON_H_
#define INC_READING_BUTTON_H_

#define NORMAL_STATE 					SET
#define PRESSED_STATE 					RESET
#define NUM_OF_BUTTON 					3
#define DURATION_FOR_AUTO_INCREASING 	300

int buttonBuffer[NUM_OF_BUTTON];
int counterForButtonPress3s[NUM_OF_BUTTON];
int flagForButtonPress3s[NUM_OF_BUTTON];
int button_flag[NUM_OF_BUTTON] ;


int isButtonPress(int index);
int ResetButtonIsPressed();
int IncButtonIsPressed();
int DecButtonIsPressed();
void getKeyInput();

#endif /* INC_READING_BUTTON_H_ */
