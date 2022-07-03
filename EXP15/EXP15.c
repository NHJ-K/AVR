/*
 * AVRGCC14.c
 *
 * Created: 07-04-2022 03:13:16
 *  Author: NHJ-K
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRB |=0x20;
	TCNT0=-32;
	TCCR0=0x01;
	TIMSK=(1<<TOIE0);
	sei();
	DDRC =0x00;
	DDRD=0xFF;
    while(1)
    {
		PORTD=~PINC;
        //TODO:: Please write your application code 
    }
}
ISR(TIMER0_OVF_vect)
{
	TCNT0=-32;
	PORTB ^=20;
}