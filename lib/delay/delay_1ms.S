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



#define	__r_waste_cycles_lo8		r24
#define	__r_waste_cycles_hi8		r25



/*
 * void delay_1ms ( void );
 *
 * Formula:	ONE_MS_CNT_DWN = (0.001 - 19/cpufreq) / (4/cpufreq)
 */
.global delay_1ms
	delay_1ms:
	push	__r_waste_cycles_lo8			;saving those registers maybe they
	push	__r_waste_cycles_hi8			;are used in the parent function.

	ldi	__r_waste_cycles_lo8, lo8(ONE_MS_CNT_DWN)
	ldi	__r_waste_cycles_hi8, hi8(ONE_MS_CNT_DWN)

1:	subi	__r_waste_cycles_lo8, 1
	sbci	__r_waste_cycles_hi8, 0
	brne	1b
	nop

	pop	__r_waste_cycles_hi8
	pop	__r_waste_cycles_lo8

	ret

