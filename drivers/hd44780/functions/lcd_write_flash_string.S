

#include "config.h"
#include "global.h"



.global	lcd_write_flash_string
	lcd_write_flash_string:
	movw	ZL, r24

1:	lpm	r24, Z+
	cp	r24, __zero_reg__
	breq	2f
	rcall	lcd_send_data
	rjmp	1b

2:	ret
