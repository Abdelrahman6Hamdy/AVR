/*
 * Timers_Conf.h
 *
 *  Created on: Aug 27, 2023
 *      Author: Abdelrahman
 */

#ifndef MCAL_TIMERS_TIMERS_CONF_H_
#define MCAL_TIMERS_TIMERS_CONF_H_

#include "Timers_Init.h"
#include "Timers_Priv.h"



/*	OVF					0
	PWM_PhaseCorrect 	1
	CTC					2
	PWM_FAST			3	*/

#define TimerMode OVF


/*	ENABLE 				1
 	DISABLE				2	*/

#define Timer0_Enable	ENABLE
#define Timer1_Enable	DISABLE
#define Timer2_Enable	DISABLE


/*	NoClock				0
	NoPrescale			1
	Prescale_8			2
	Prescale_64			3
	Prescale_256		4	*/

#define PreScaler_Value	NoPrescale

#endif /* MCAL_TIMERS_TIMERS_CONF_H_ */
