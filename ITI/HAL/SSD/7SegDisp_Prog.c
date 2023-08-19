/*
 * 7SegDisp_Prog.c
 *
 *  Created on: Aug 19, 2023
 *      Author: Abdelrahman
 */


#include "7SegDisp_Int.h"


static const u8 G_u8_Nums [10] =
		{
				0b00111111 , //0
				0b00000110 , //1
				0b01011011 , //2
				0b01001111 , //3
				0b01100110 , //4
				0b01101101 , //5
				0b01111101 , //6
				0b00000111 , //7
				0b01111111 , //8
				0b01101111   //9
		};


void HSSD_VoidInit(u8 A_u8_SSD_PortNum)
{
	if(A_u8_SSD_PortNum <= PORTD)
	{
	MDIO_voidSetPortDirection(A_u8_SSD_PortNum , 0Xff);
	}
}


void HSSD_VoidDisplayNumber(u8 A_u8_SSD_PortNum ,u8 A_u8_Num)
{
	if(A_u8_SSD_PortNum <= PORTD && A_u8_Num <= 9 && A_u8_Num >=0 )
	{
#if SSD_Type==Cathode
	MDIO_voidSetPortValue(A_u8_SSD_PortNum, G_u8_Nums[A_u8_Num]);

#elif SSD_Type == Anode
	MDIO_voidSetPortValue(A_u8_SSD_PortNum, ~G_u8_Nums[A_u8_Num]);

#else
	#error "Define SSD type"
#endif
	}
}


void HSSD_VoidTurnOff(u8 A_u8_SSD_PortNum)
{
	if(A_u8_SSD_PortNum <= PORTD)
	{
		#if SSD_Type==Cathode
			MDIO_voidSetPortValue(A_u8_SSD_PortNum,0x00);

		#elif SSD_Type == Anode
			MDIO_voidSetPortValue(A_u8_SSD_PortNum,0xff);

		#else
			#error "Define SSD type"
		#endif
	}
}

void HSSD_VoidCountUp(u8 A_u8_SSD_PortNum,u8 A_u8_Num)
{
	if(A_u8_SSD_PortNum <= PORTD && A_u8_Num <= 9 && A_u8_Num >=0 )
	{
		u8 Counter;
		for(Counter=A_u8_Num;Counter<=9;Counter++)
		{
			MDIO_voidSetPortValue(A_u8_SSD_PortNum,Counter);
		}
	}
}


void HSSD_VoidCountDown(u8 A_u8_SSD_PortNum,u8 A_u8_Num)
{
	if(A_u8_SSD_PortNum <= PORTD && A_u8_Num <= 9 && A_u8_Num >=0 )
	{
		u8 Counter;
		for(Counter=A_u8_Num;Counter>=0;Counter--)
		{
			MDIO_voidSetPortValue(A_u8_SSD_PortNum,Counter);
		}
	}
}
