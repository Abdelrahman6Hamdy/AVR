/*
 * mainSSD.c
 *
 *  Created on: Aug 19, 2023
 *      Author: Abdelrahman
 */


/*
 * main.c
 *
 *  Created on: Aug 19, 2023
 *      Author: Abdelrahman
 */

#define FCPU 8000000

#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Init.h"
#include "../HAL/SSD/7SegDisp_Int.h"

#include <util/delay.h>

int main(){

	HSSD_VoidInit(PORTA);
	HSSD_VoidInit(PORTC);
	HSSD_VoidInit(PORTD);


	while(1){

	for(u8 k=0;k<10;k++)
	{
		HSSD_VoidDisplayNumber(PORTA,k);

		for(u8 j=0;j<6;j++)
		{
		HSSD_VoidDisplayNumber(PORTD,j);

			for (u8 i=0;i<10;i++)
			{
				HSSD_VoidDisplayNumber(PORTC,i);

				_delay_ms(100);

			}
		}

	}
}

return 1;
}
