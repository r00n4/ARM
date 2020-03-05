#include "MDR32Fx.h"    // Device header


#	define SW1 (1<<2)
#	define VD5 (1<<0)

int main (void)
{
	
// Peripheral timing
MDR_RST_CLK->PER_CLOCK |= (1 << 22);
MDR_RST_CLK->PER_CLOCK |= (1 << 23);
// PB-port config
MDR_PORTB -> OE = (1 << 0);									// OE = VD5
MDR_PORTB -> ANALOG = (1 << 0);							// ANALOG = VD5
MDR_PORTB -> FUNC = (0 << 0*2);
MDR_PORTB -> PULL = (1 << 0) << 16;					// PULL = VD5 << 16
MDR_PORTB -> PD = (0 << 0);
MDR_PORTB -> PWR = (1 << 0*2);							// PWR = VD5
// PC-port config
MDR_PORTC -> OE = (0 << 2);
MDR_PORTC -> ANALOG = (1 << 2);							// ANALOG = SW1
MDR_PORTC -> FUNC = (0 << 2*2);
MDR_PORTC -> PULL = (1 << 2) << 16;					// PULL = SW1 << 16
MDR_PORTC -> PD = (1 << 2) << 16;						// PD = SW1 << 16
MDR_PORTC -> PWR = (1 << 2*2);
MDR_PORTC -> GFEN = (1 << 2);								// GFEN = SW1

while(1) {
if (MDR_PORTC->RXTX & SW1) {
MDR_PORTB->RXTX &= ~ VD5; 	}
else
{
MDR_PORTB->RXTX |= VD5;
} 				}
}
