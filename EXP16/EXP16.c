/*
 * AVRGCC15.c
 *
 * Created: 07-04-2022 03:27:02
 *  Author: NHJ-K
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 1000000UL

int main(void)
{
	DDRB|=0x20;

	TCNT0=0x0f;
	TCCR0=0x04;
	OCR0=0xaa;
	TIMSK|=(1<<OCIE0);
	sei();
	
    DDRD=0x00;
	DDRC=0xff;
	while (1) 
    {
		
		PORTC=~PIND;
    }
}

ISR(TIMER0_COMP_vect){
	TCNT0=0x0f;
	PORTB^=0x20;

}