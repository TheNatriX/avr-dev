/*
 * File:	delay.S
 * About:	Waste some CPU clock cycles resulting in a delay.
 *		Very CPU intensive.
 *
 *		NatriX 2014
 *
 * Timing:	1Mhz = 1 us clock cycle
 *		4Mhz = 250 ns clock cycle
 *		8Mhz = 125 ns clock cycle
 *		16Mhz = 62.5 ns clock cycle
 */



#include "config.h"
#include "global.h"



#if	CPU_FREQ == 16000000

/*
 * void delay_1us ( void );
 *
 * Available only at 16Mhz.
 * Formula: 16 * 62.5ns = 1000ns
 */
.global	delay_1us
	delay_1us:
	push	r24
	push	r24
	nop
	pop	r24
	pop	r24

	ret

#else
#warning	"void delay_1us( void ) is available only at 16MHz clock."
#endif /* #if CPU_FREQ == 16000000 */
