/*
 * LM35_Prog.c
 *
 *  Created on: Sep 5, 2023
 *      Author: Abdelrahman
 */


#include "LM35_Init.h"

void HLM35_VoidLM35Init(void)
{
	MADC_VoidADCInit();
}
u16  HLM35_u16LM35Read(void)
{
	u16 Local_U16_Temp = (MADC_VoidADCRead(LM35_PIN) * (u32)500) / 1024;
	return Local_U16_Temp;
}
