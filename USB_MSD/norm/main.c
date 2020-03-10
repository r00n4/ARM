#include "MDR32Fx.h"                    // Device header
#include "MDR32F9Qx_config.h"
#define SW1 (1<<2) // Button SW1 connect to PC2
#define VD5 (1<<0) // LED VD5 to PB0 port
int main (void)
{
// Peripheral clk
MDR_RST_CLK->PER_CLOCK |= (1 << 22); // Port B Clk permission
MDR_RST_CLK->PER_CLOCK |= (1 << 23); // Port C Clk permission
// Setting port B
MDR_PORTB -> OE = (1 << 0); 					// Output Enable
MDR_PORTB -> ANALOG = (1 << 0); 			// Port B - Digital
MDR_PORTB -> FUNC = (0 << 0*2); 			// 
MDR_PORTB -> PULL = (1 << 0) << 16; 
MDR_PORTB -> PD = (0 << 0); 
MDR_PORTB -> PWR = (1 << 0*2); 
// Setting port C
MDR_PORTC -> OE = (0 << 2); 
MDR_PORTC -> ANALOG = (1 << 2); 
MDR_PORTC -> FUNC = (0 << 2*2);
MDR_PORTC -> PULL = (1 << 2) << 16; 
MDR_PORTC -> PD = (1 << 2) << 16; 
MDR_PORTC -> PWR = (1 << 2*2); 
MDR_PORTC -> GFEN = (1 << 2); 
while(1) 													// main program
{
if (MDR_PORTC->RXTX & SW1) 				// Button non active if the bit is set
{
MDR_PORTB->RXTX &= ~ VD5; 				// PB0 set toZERO (LED is OFF)
}
else
{
MDR_PORTB->RXTX |= VD5; 					// Set PB0 te 1 (LED is ON)
}
}
}
//========================================================================================