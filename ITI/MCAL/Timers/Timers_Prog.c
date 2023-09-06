/*
 * Timers.c
 *
 *  Created on: Aug 27, 2023
 *      Author: Abdelrahman
 */
/*

#include "../DIO/DIO_Init.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "Timers_Init.h"
#include "Timers_Priv.h"
#include "Timers_Conf.h"

void *(G_Timer_OVF)(void);
u32 G_u32_IntervalCounter_OVF;

void *(G_Timer_CTC)(void);
u32 G_u32_IntervalCounter_CTC;

void MTIMERS_VoidInit(u8 A_u8_TimerMode)
{

#if Timer0_Enable == ENABLE

#if TimerMode == OVF
		CLR_BIT(TCCR0,WGM00);
		CLR_BIT(TCCR0,WGM01);

		CLR_BIT(TCCR0,COM00);
		CLR_BIT(TCCR0,COM01);

		SET_BIT(TIMSK,TOIE0);

#elif TimerMode == PWM_PhaseCorrect
		SET_BIT(TCCR0,WGM00);
		CLR_BIT(TCCR0,WGM01);


#elif TimerMode == CTC
		CLR_BIT(TCCR0,WGM00);
		SET_BIT(TCCR0,WGM01);

		SET_BIT(TIMSK,OCIE0);


#elif TimerMode == PWM_FAST
		SET_BIT(TCCR0,WGM00);
		SET_BIT(TCCR0,WGM01);

#else
#error "Wrong Timer Mode"
#endif
#endif
*/
//##############################################

/*#if Timer1_Enable == ENABLE

#if TimerMode == OVF
		CLR_BIT(TCCR1A,WGM10);
		CLR_BIT(TCCR1A,WGM11);
		CLR_BIT(TCCR1B,WGM10);
		CLR_BIT(TCCR1B,WGM11);


		CLR_BIT(TCCR1A,COM1A0);
		CLR_BIT(TCCR1A,COM1A1);
		CLR_BIT(TCCR1B,COM1B0);
		CLR_BIT(TCCR1B,COM1B1);

		//SET_BIT(TIMSK,TOIE0);

#elif TimerMode == PWM_PhaseCorrect
		CLR_BIT(TCCR1A,WGM10);
		CLR_BIT(TCCR1A,WGM11);
		CLR_BIT(TCCR1B,WGM10);
		CLR_BIT(TCCR1B,WGM11);


#elif TimerMode == CTC
		CLR_BIT(TCCR1A,WGM00);
		SET_BIT(TCCR1A,WGM01);

		SET_BIT(TIMSK,OCIE0);


#elif TimerMode == PWM_FAST
		SET_BIT(TCCR1A,WGM00);
		SET_BIT(TCCR1A,WGM01);

#else
#error "Wrong Timer Mode"
#endif
#endif
//####################################
#if Timer2_Enable == ENABLE

#if TimerMode == OVF
		CLR_BIT(TCCR2,WGM20);
		CLR_BIT(TCCR2,WGM21);

		CLR_BIT(TCCR2,COM20);
		CLR_BIT(TCCR2,COM21);

		SET_BIT(TIMSK,TOIE0);

#elif TimerMode == PWM_PhaseCorrect
		SET_BIT(TCCR2,WGM20);
		CLR_BIT(TCCR2,WGM21);


#elif TimerMode == CTC
		CLR_BIT(TCCR2,WGM20);
		SET_BIT(TCCR2,WGM21);

		SET_BIT(TIMSK,OCIE0);


#elif TimerMode == PWM_FAST
		SET_BIT(TCCR2,WGM20);
		SET_BIT(TCCR2,WGM21);

#else
#error "Wrong Timer Mode"
#endif
#endif
}
*/
/*
void MTIMERS_VoidStart()
{
#if Timer0_Enable == ENABLE
	TCCR0 = (TCCR0 & 0b11111000) | (PreScaler_Value);
#endif

#if Timer1_Enable == ENABLE
	TCCR1A = (TCCR1A & 0b11111000) | (PreScaler_Value);
	TCCR1B = (TCCR1B & 0b11111000) | (PreScaler_Value);

#endif

#if Timer2_Enable == ENABLE
	TCCR2 = (TCCR2 & 0b11111000) | (PreScaler_Value);
#endif
}

void MTIMERS_VoidStop()
{
#if Timer0_Enable == ENABLE
	TCCR0 = (TCCR0 & 0b11111000) | (NoClock);
#endif

#if Timer1_Enable == ENABLE
	TCCR1A = (TCCR1A & 0b11111000) | (NoClock);
	TCCR1B = (TCCR1B & 0b11111000) | (NoClock);

#endif

#if Timer2_Enable == ENABLE
	TCCR2 = (TCCR2 & 0b11111000) | (NoClock);
#endif
}
*/
/*
void MTIMERS_VoidPreloadValue(u16 A_u16_PreloadValue)
{

#if Timer0_Enable == ENABLE
	TCNT0= A_u16_PreloadValue;
#endif

#if Timer1_Enable == ENABLE
	TCNT1H = A_u16_PreloadValue >> 8;
	TCNT1L = A_u16_PreloadValue;

#endif

#if Timer2_Enable == ENABLE
	TCNT2= A_u16_PreloadValue;
#endif
}

void MTIMERS_VoidSetIntervals_OVF( u16 A_u16_Intervals,void *(A_Ptr)(void))
{
	G_Timer_OVF = A_Ptr;
	G_u32_IntervalCounter_OVF=A_u16_Intervals;
	MTIMERS_VoidStart();
}

void MTIMERS_VoidSetIntervals_CTC( u16 A_u16_Intervals,void *(A_Ptr)(void))
{
	G_Timer_CTC=A_Ptr;
	G_u32_IntervalCounter_CTC=A_u16_Intervals;
	MTIMERS_VoidStart();
}

void __vector_11 (void) __attribute__((signal));

void __vector_11 (void)
{
	static u32 LS_u32_Counter_OVF=0;

	LS_u32_Counter_OVF ++ ;

	if(LS_u32_Counter_OVF == G_u32_IntervalCounter_OVF )
	{
		G_Timer_OVF() ;
		LS_u32_Counter_OVF = 0 ;
	}

}


void __vector_4 (void) __attribute__((signal));

void __vector_4 (void)
{
	static u32 LS_u32_Counter_CTC=0;

	LS_u32_Counter_CTC ++ ;

	if(LS_u32_Counter_CTC == G_u32_IntervalCounter_CTC )
	{
		G_Timer_CTC() ;
		LS_u32_Counter_CTC = 0 ;
	}

}

*/





