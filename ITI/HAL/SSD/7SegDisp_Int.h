/*
 * 7SegDisp_Int.h
 *
 *  Created on: Aug 19, 2023
 *      Author: Abdelrahman
 */

#ifndef HAL_SSD_7SEGDISP_INT_H_
#define HAL_SSD_7SEGDISP_INT_H_


#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_Init.h"

#define SSD_Type	Cathode

#define Cathode	5
#define Anode	6



void HSSD_VoidInit(u8 A_u8_SSD_PortNum);
void HSSD_VoidDisplayNumber(u8 A_u8_SSD_PortNum ,u8 A_u8_Num);
void HSSD_VoidTurnOff(u8 A_u8_SSD_PortNum);
void HSSD_VoidCountUp(u8 A_u8_SSD_PortNum,u8 A_u8_Num);
void HSSD_VoidCountDown(u8 A_u8_SSD_PortNum,u8 A_u8_Num);


#endif /* HAL_SSD_7SEGDISP_INT_H_ */
