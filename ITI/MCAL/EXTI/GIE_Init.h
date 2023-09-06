/*
 * GIE_Init.h
 *
 *  Created on: Aug 27, 2023
 *      Author: Abdelrahman
 */

#ifndef MCAL_EXTI_GIE_INIT_H_
#define MCAL_EXTI_GIE_INIT_H_


#include "../DIO/DIO_Init.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


#define SREG  *((volatile u8 *) 0x5f)


void MGIE_VoidEnable();
void MGIE_VoidDisable();

#endif /* MCAL_EXTI_GIE_INIT_H_ */
