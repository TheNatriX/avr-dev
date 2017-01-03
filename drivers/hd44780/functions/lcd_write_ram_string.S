#include "config.h"
#include "global.h"



/*	using GCC compatibility call convention	*/
#define	__r_str_ptr_lo8			r24
#define	__r_str_ptr_hi8			r25


/*
 *	void lcd_write_ram_string( char * str );
 */
.global	lcd_write_ram_string
	lcd_write_ram_string:
	movw	ZL, __r_str_ptr_lo8

1:	ld	r24, Z+
	cp	r24, __zero_reg__
	breq	2f
	rcall	lcd_send_data
	rjmp	1b

2:	ret
