/*
 * AVRGCC2.c
 *
 * Created: 06-04-2022 21:02:40
 *  Author: NHJ-K
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB=0xFF;
	PORTB |=(1<<PB7);
    while(1)
    {
		PORTB |=(1<<PB1);
		_delay_ms(1000);
		PORTB &= ~(1<<PB1);
		_delay_ms(1000);
        //TODO:: Please write your application code 
    }
}
