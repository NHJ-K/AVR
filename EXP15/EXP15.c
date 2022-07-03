/*
 * AVRGCC14.c
 *
 * Created: 07-04-2022 03:13:16
 *  Author: NHJ-K
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 1000000UL

int main(void)
{
	DDRB|=0x20;

	TCNT0=0x0f;
	TCCR0=0x05;
	TIMSK|=(1<<TOIE0);
	sei();
	
    DDRD=0x00;
	DDRC=0xff;
	while (1) 
    {
		
		PORTC=~PIND;
    }
}

ISR(TIMER0_OVF_vect){
	TCNT0=0x0f;
	PORTB^=0x20;

}