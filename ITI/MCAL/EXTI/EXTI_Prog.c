/*
 * EXTI_Prog.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Abdelrahman
 */

#include "EXTI_Init.h"

void MEXTI_VoidSenseControl(u8 A_u8_EXTI_Line, u8 A_u8_EXTI_Sense)
{
	switch(A_u8_EXTI_Line)
	{
	case EXTI_Line0 :
		switch (A_u8_EXTI_Sense)
		{
		case (EXTI_Low):
			CLR_BIT(MCUCR,0);
			CLR_BIT(MCUCR,1);
			break;

		case (EXTI_Change):
			SET_BIT(MCUCR,0);
			CLR_BIT(MCUCR,1);
			break;

		case (EXTI_Falling):
			CLR_BIT(MCUCR,0);
			SET_BIT(MCUCR,1);
			break;

		case (EXTI_Rising):
			SET_BIT(MCUCR,0);
			SET_BIT(MCUCR,1);
			break;
		}
		break;


	case EXTI_Line1 :
		switch (A_u8_EXTI_Sense)
		{
		case (EXTI_Low):
			CLR_BIT(MCUCR,2);
			CLR_BIT(MCUCR,3);
			break;

		case (EXTI_Change):
			SET_BIT(MCUCR,2);
			CLR_BIT(MCUCR,3);
			break;

		case (EXTI_Falling):
			CLR_BIT(MCUCR,2);
			SET_BIT(MCUCR,3);
			break;

		case (EXTI_Rising):
			SET_BIT(MCUCR,2);
			SET_BIT(MCUCR,3);
			break;
		}
		break;

	case EXTI_Line2 :
		switch (A_u8_EXTI_Sense)
		{
		case (EXTI_Falling):
			CLR_BIT(MCUCSR,6);
			break;

		case (EXTI_Rising):
			SET_BIT(MCUCSR,6);
			break;
		}
		break;


	}
}


void MEXTI_VoidEnable(u8 A_u8_EXTI_Line)
{
	switch(A_u8_EXTI_Line)
	{
	case(EXTI_Line0): SET_BIT(GICR,6); break;
	case(EXTI_Line1): SET_BIT(GICR,7); break;
	case(EXTI_Line2): SET_BIT(GICR,5); break;
	}
}

void MEXTI_VoidDisable(u8 A_u8_EXTI_Line)
{
	switch(A_u8_EXTI_Line)
	{
	case(EXTI_Line0): CLR_BIT(GICR,6); break;
	case(EXTI_Line1): CLR_BIT(GICR,7); break; break;
	case(EXTI_Line2): CLR_BIT(GICR,5);
	}
}

