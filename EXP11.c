/*
 * AVRGCC10.c
 *
 * Created: 07-04-2022 02:49:23
 *  Author: NHJ-K
 */ 

#include <avr/io.h> 
#include <util/delay.h>
#define DATA1 7
#define DATA2 3
#define DATA3 0xFF
#define DATA4 0x1
#define DATA5 5
#define DATA6 2

int main(void)
{
	DDRB=0xFF;
	PORTB = DATA1 + DATA2;
	_delay_ms(100);
	PORTB = DATA3 - DATA4;
	_delay_ms(100);
	PORTB = DATA5 * DATA6;
	return 0;
    
}