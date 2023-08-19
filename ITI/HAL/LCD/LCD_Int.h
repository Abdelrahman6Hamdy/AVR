/*
 * LCD_Int.h
 *
 *  Created on: Aug 19, 2023
 *      Author: Abdelrahman
 */

#ifndef HAL_LCD_LCD_INT_H_
#define HAL_LCD_LCD_INT_H_

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO_Init.h"



void HLCD_VoidInit();
void HLCD_VoidSendCommand(u8 A_u8_cmd);
void HLCD_VoidSendData(u8 A_u8_Data);
void HLCD_VoidClear();
void HLCD_VoidCursor(u8 A_u8_RowNum,u8 A_u8_ColNum);
void HLCD_VoidSendString(u8 *A_u8_PtrString);
void HLCD_VoidDisplayNumber(s32 A_s32_Number  );
void HLCD_VoidSaveCustomChar(u8 A_u8_CGRAMIndex, u8 A_u8_CustomArray[]);
void HLCD_VoidDisplayCustomChar(u8 A_u8_CGRAMIndex);

#endif /* HAL_LCD_LCD_INT_H_ */
