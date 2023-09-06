/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: Abdelrahman
 */

/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: ENG.AbdelrhmanEslam
 */
#include <avr/io.h>
#include <util/delay.h>


int main(){
	/*
	 * 0b 0 0 0 0 0 0 1 0
	 * 0xff -> 0b 1111 1111
	 * 0x0f	-> 0b 0000 1111
	 * */
	DDRA = 0xff;
	PORTA = 0b00000001;
	_delay_ms(500);
	while(1){
		PORTA = 0b00000001;
		_delay_ms(500);
		for(int i=0 ; i<8; i++){

			PORTA <<=1;

			_delay_ms(500);
		}


	}

return 0;}
