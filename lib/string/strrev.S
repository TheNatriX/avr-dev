#include "config.h"
#include "global.h"


/*	Arguments			*/
#define	__r_str_ptr_lo8			r24
#define	__r_str_ptr_hi8			r25

/*	Other		*/
#define	__r_str_size			r23
#define	__r_begin_byte			r22
#define	__r_end_byte			__tmp_reg__

/*
 *	char * strrev( char * str )
 */
.global strrev
	strrev:
	movw	ZL, __r_str_ptr_lo8
	movw	XL, __r_str_ptr_lo8
	/*	set Z pointer at the end of string	*/
1:	ld	__tmp_reg__, Z+
	cp	__tmp_reg__, __zero_reg__
	brne	1b
	sbiw	ZL, 1
	/*	swap bytes		*/
2:	ld	__r_begin_byte, X
	ld	__r_end_byte, -Z
	cp	XL, ZL
	cpc	XH, ZH
	brge	3f
	st	Z, __r_begin_byte
	st	X+, __r_end_byte
	rjmp	2b
3:	ret
