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
 * void delay_us ( uint16_t us );
 *
 * Available only at 16Mhz.
 * This function suffers by lack of precision, see below.
 * Error raport 1:4
 * FIXME: maybe could be better using a single block function,
 *	without calling delay_1us.
 * Formula:	7 * 62.5ns + 4 * CNT * 62.5ns + 1us * CNT
 *		where CNT = rWL:rWH
 */
.global	delay_us
	delay_us:
	rcall	delay_1us
	sbiw	r24, 1
	brne	delay_us
	ret

#else
#warning "void delay_us( uint16_t us ) is available only at 16MHz clock."
#endif

