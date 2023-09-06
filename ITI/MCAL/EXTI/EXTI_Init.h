/*
 * EXTI_Init.h
 *
 *  Created on: Aug 26, 2023
 *      Author: Abdelrahman
 */

#ifndef MCAL_EXTI_EXTI_INIT_H_
#define MCAL_EXTI_EXTI_INIT_H_

#include "../DIO/DIO_Init.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


#define MCUCR  *((volatile u8 *) 0x55)
#define MCUCSR *((volatile u8 *) 0x54)
#define GICR   *((volatile u8 *) 0x5B)



#define EXTI_Line0 0
#define EXTI_Line1 1
#define EXTI_Line2 2

#define EXTI_Low		0
#define EXTI_Change		1
#define EXTI_Falling	2
#define EXTI_Rising		3




void MEXTI_VoidSenseControl(u8 A_u8_EXTI_Line, u8 A_u8_EXTI_Sense);
void MEXTI_VoidEnable(u8 A_u8_EXTI_Line);
void MEXTI_VoidDisable(u8 A_u8_EXTI_Line);

#endif /* MCAL_EXTI_EXTI_INIT_H_ */
