/*
#ifndef MAIN_H													// (if NOT defined) constant existance check
#define MAIN_H													// Renew the constant
#endif																	// Suspended compilation ending

#include "main.h"
*/
#include "MDR32Fx.h"                    // Device header

int main (void) {

	/*Initialisation*/
	void LED_Init(void)
	{
		/*PortC Clk*/
		MDR_RST_CLK->PER_CLOCK |= (1 << RST_CLK_PCLK_PORTC_Pos);
		
		/*Configuration of PC0 & PC1 lines*/	
		MDR_PORTC->OE			|= 	((1 << 0) 	| (1 << 1)); 		// Data move direction 
		MDR_PORTC->PULL 		&= ~((1 << 0) 	| (1 << 1)); 		// Connecting to the GND is OFF
		MDR_PORTC->PULL 		&= ~((1 << 16)	| (1 << 17));		// Connecting to the Vcc is OFF
		MDR_PORTC->ANALOG 		|= 	((1 << 0) 	| (1 << 1));		// Line mode is DIGITAL
		MDR_PORTC->FUNC 		&= ~((3 << 0) 	| (3 << 2));		// Input/Output
		MDR_PORTC->PD 			&= ~((1 << 0) 	| (1 << 1));		// Managing line by Drivers
		MDR_PORTC->PD 			&= ~((1 << 16) 	| (1 << 17));   // The Schmitt trigger is OFF
		MDR_PORTC->PWR 			&= ~((3 << 0) 	| (3 << 2));		// PWR Register bits are Reseted
		MDR_PORTC->PWR 			|= ((1 << 0) 	| (1 << 2));		// Edge angle
		MDR_PORTC->GFEN 		&= ~((1 << 0) 	| (1 << 1));		// Digital filters are OFF
		
	}
	
	
	while (1) 
	{
		
	}
	
}