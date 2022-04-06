/*
 * AVRGCC1.c
 *
 * Created: 06-04-2022 20:50:15
 *  Author: NHJ-K
 */ 

//LED INTERFACING EXP4

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB=0xFF;
	PORTB=0b11111111;
    while(1)
    {
		_delay_ms(1000);
		PORTB = ~ PORTB;
        //TODO:: Please write your application code 
    }
}