/*
 * AVRGCC12.c
 *
 * Created: 07-04-2022 03:03:24
 *  Author: NHJ-K
 */ 

#include <avr/io.h>
void todelay();

int main(void)
{
	DDRB=0xFF;
    while(1)
    {
		PORTB=0x55;
		todelay();
		PORTB=0xAA;
		todelay();
    }
}
void todelay()
{
	TCNT0=0x20;
	TCCR0=0x01;
	while((TIFR&0x01)==0);
	TCCR0=0;
	TIFR=0x01;
	
}