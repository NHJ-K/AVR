/*
 * AVRGCC9.c
 *
 * Created: 07-04-2022 02:44:18
 *  Author: NHJ-K
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define buzzer PC5
int main(void)
{
	DDRC=0xFF;
	PORTC = 0x00;
	
	while(1)
    {
		_delay_ms(300);
		PORTC |= (1<<buzzer);
		_delay_ms(300);
		PORTC &= ~(1<<buzzer);
        //TODO:: Please write your application code 
    }
}