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



#define	__r_sec_lo8		r24
#define	__r_sec_hi8		r25


/*
 * void delay_sec ( uint16_t sec );
 *
 * Formula for delay 1 sec:
 *	(2000 + 4000 * ONE_SEC_CNT_DWN + ONE_SEC_CNT_DWN * freq) / (1000 * freq) = 1
 *
 */
.global	delay_sec
	delay_sec:
	push	r2
2:	sbiw	__r_sec_lo8, 1
	in	r2, SREG

	/* delay 1 sec */
	ldi	r20, lo8(ONE_SEC_CNT_DWN)
	ldi	r21, hi8(ONE_SEC_CNT_DWN)
1:	rcall	delay_1ms
	subi	r20, 1
	sbci	r21, 0
	brne	1b

	out	SREG, r2
	brne	2b
	pop	r2

	ret


