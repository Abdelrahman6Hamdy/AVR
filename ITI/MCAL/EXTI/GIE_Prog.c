/*
 * GIE_Prog.c
 *
 *  Created on: Aug 27, 2023
 *      Author: Abdelrahman
 */


#include "GIE_Init.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


void MGIE_VoidEnable()
{
	SET_BIT(SREG,7);
}
void MGIE_VoidDisable()
{
	SET_BIT(SREG,7);
}
