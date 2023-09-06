/*
 * Timers.h
 *
 *  Created on: Aug 27, 2023
 *      Author: Abdelrahman
 */

#ifndef MCAL_TIMERS_TIMERS_INIT_H_
#define MCAL_TIMERS_TIMERS_INIT_H_

#include "Timers_Priv.h"
#include "Timers_Conf.h"


#define OCR0		*((volatile u8 *) 0x5C)			//Output compare

#define TIMSK		*((volatile u8 *) 0x59)
#define TIFR		*((volatile u8 *) 0x58)			//flag	bit 0 Overflow	bit 1 compare

#define TCCR0		*((volatile u8 *) 0x53)
#define TCNT0		*((volatile u8 *) 0x52)			//counter

#define SFIOR		*((volatile u8 *) 0x50)

#define TCCR1A		*((volatile u8 *) 0x4f)
#define TCCR1B		*((volatile u8 *) 0x4E)
#define TCCR2		*((volatile u8 *) 0x45)

#define TCNT1H		*((volatile u8 *) 0x4D)
#define TCNT1L		*((volatile u8 *) 0x4C)

/*
 * VoidSetIntervals
 * */

void MTIMERS_VoidInit(u8 A_u8_TimerMode);
void MTIMERS_VoidStart();
void MTIMERS_VoidStop();
void MTIMERS_VoidSetPreload(u16 A_u16_PreloadValue);

void MTIMERS_VoidSetIntervals_CTC( u16 A_u16_Intervals,void *(A_Ptr)(void));
void MTIMERS_VoidSetIntervals_OVF( u16 A_u16_Intervals,void *(A_Ptr)(void));


#endif /* MCAL_TIMERS_TIMERS_INIT_H_ */
