/*
 * AVRGCC8.c
 *
 * Created: 07-04-2022 02:39:11
 *  Author: NHJ-K
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB=0xFF;
	DDRD=0x00;
    while(1)
    {
		_delay_ms(10);
		PORTB= ~ PIND;
        //TODO:: Please write your application code 
    }
}