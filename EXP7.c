/*
 * AVRGCC4.c
 *
 * Created: 06-04-2022 21:28:11
 *  Author: NHJ-K
 */ 

//ASCII TO BCD EXP7

#include <avr/io.h>

int main(void)
{
	unsigned char x = '4';
	unsigned char y='7';
	unsigned char mybyte;
	
	DDRB = 0xFF;
	
	y &=0x0F;
	x &=0x0F;
	x=x<<4;
	mybyte = x | y;
	
	PORTB=mybyte;
	return 0;
}