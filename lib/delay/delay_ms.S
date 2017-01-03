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


/*
 * void delay_ms( uint16_t ms );
 *
 * Formula at 16MHz:	7 * 62.5 + 4 * 62.5 * CNT + 1000 * CNT
 *			where CNT = rWL:WH
 * FIXME: Lack of precision. Error raport 1:4
 */
.global	delay_ms
	delay_ms:
	rcall	delay_1ms
	sbiw	r24, 1
	brne	delay_ms
	ret
