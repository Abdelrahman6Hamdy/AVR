/*
 * Timers_Priv.h
 *
 *  Created on: Aug 27, 2023
 *      Author: Abdelrahman
 */

#ifndef MCAL_TIMERS_TIMERS_PRIV_H_
#define MCAL_TIMERS_TIMERS_PRIV_H_

#include "Timers_Init.h"
#include "Timers_Conf.h"

//TimerMode
#define OVF					0
#define PWM_PhaseCorrect 	1
#define CTC					2
#define PWM_FAST			3


//Presccaler values
#define	NoClock			0
#define	NoPrescale		1
#define	Prescale_8		2
#define Prescale_64		3
#define Prescale_256	4

//TIMER ENABLE
#define ENABLE 			1
#define DISABLE			2


//TIMER0###############################
#define WGM00	6
#define WGM01	3

#define COM00	4
#define COM01	5
//TIMER1###############################
#define WGM10	6
#define WGM11	3

#define COM1A0	6
#define COM1A1	7

#define COM1B0	6
#define COM1B1	7
//TIMER2###############################
#define WGM20	6
#define WGM21	3

#define COM20	4
#define COM21	5

//###############################


#define CS00	0
#define CS01	1
#define CS02	2

#define TOIE0	0
#define OCIE0	1


#endif /* MCAL_TIMERS_TIMERS_PRIV_H_ */
