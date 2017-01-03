#include "config.h"
#include "global.h"


/*
 *	Using GCC call convention, define
 *	some registers.
 */
#define	__r_char_ptr_lo8		r24
#define __r_char_ptr_hi8		r25

#define __r_ul_val_lo8			r20
#define __r_ul_val_hi8			r21
#define __r_ul_val_hlo8			r22
#define	__r_ul_val_hhi8			r23


/*	Other registers.		*/
#define	__r_bit_counter			r18
#define	__r_flash_byte			r16
#define	__r_buffer_byte			r17
#define	__r_pow_of_two			r3
#define	__r_Yptr_bkp_lo8		r26
#define __r_Yptr_bkp_hi8		r27


/*
 * char * ltoa2( char *buffer, unsigned long value );
 * Convert binary to decimal ascii (radix = 10).
 * FIXME NEED OPTIMISATION!!!
 */
.global	ltoa2
	ltoa2:
	push	__r_bit_counter
	push	__r_flash_byte
	push	__r_buffer_byte
	push	__r_pow_of_two
	push	__r_Yptr_bkp_lo8
	push	__r_Yptr_bkp_hi8
	/*	set to zero some registers	*/
	clr	__r_bit_counter
	clr	__r_pow_of_two
	/*	load address of the 2^pow table	*/
	ldi	ZL, lo8(power_of_two)
	ldi	ZH, hi8(power_of_two)
1:	/*	PROCESSING NEXT BIT		*/
	/*	start to check bits. using __r_bit_counter which is already
		cleared	by above operations. __r_bit_counter will be used
		for incrementation.				*/
	/*	reset buffer address at each bit processing	*/
	movw	YL, __r_char_ptr_lo8
	/*	skip processing if bit is zero	*/
	sbrs	__r_ul_val_lo8, 0
	rjmp	8f /*	skip processing		*/
2:	/*	PROCESSING PART			*/
	/*	SYNC the exponent with table entry	*/
	cp	__r_pow_of_two, __r_bit_counter
	breq	4f
3:	/*	read flash byte for synchronisation	*/
	lpm	__r_flash_byte, Z+
	/*	if not end of string, read next flash byte	*/
	cpi	__r_flash_byte, 22
	brne	3b
	inc	__r_pow_of_two
	rjmp	2b /*	jump to continue sync	*/
4:	/*	LOAD FLASH BYTE			*/
	lpm	__r_flash_byte,	Z+
	/*	test the end of table entry	*/
	cpi	__r_flash_byte, 22
	breq	7f
	/*	load ram byte and remain on that
		address because it must be written
		down after some calculus	*/
	ld	__r_buffer_byte, Y
	/*	add bytes togheter		*/
	add	__r_buffer_byte, __r_flash_byte
	/*	check it for overflow ( > '9' )	*/
	cpi	__r_buffer_byte, 0x3a
	brpl	5f
	/*	store the value and point to the
		next value in buffer		*/
	st	Y+, __r_buffer_byte
	rjmp	4b /* jump to load flash byte	*/
5:	/*	OVERFLOW			*/
	/*	store current value of Y	*/
	movw	__r_Yptr_bkp_lo8, YL
6:	/*	OVERFLOW CHAIN			*/
	/*	e.g. 15 ---> 5 and store	*/
	subi	__r_buffer_byte, 10
	st	Y+, __r_buffer_byte
	/*	load next, increment by carry and store	*/
	ld	__r_buffer_byte, Y
	inc	__r_buffer_byte
	st	Y, __r_buffer_byte
	/*	check again if overflowed	*/
	cpi	__r_buffer_byte, 0x3a
	brpl	6b
	/*	restore Y + 1			*/
	adiw	__r_Yptr_bkp_lo8, 1
	movw	YL, __r_Yptr_bkp_lo8
	rjmp	4b /* jump to load flash byte	*/
7:	inc	__r_pow_of_two
8:	/*	end of processing part		*/
	inc	__r_bit_counter
	/*	SHIFT TO NEXT BIT IN THE BIG NUM*/
	ror	__r_ul_val_hhi8
	ror	__r_ul_val_hlo8
	ror	__r_ul_val_hi8
	ror	__r_ul_val_lo8
	/*	until all 32 bits are checked	*/
	cpi	__r_bit_counter, 32
	brne	1b /*	jump to read next bit	*/

	pop	__r_Yptr_bkp_hi8
	pop	__r_Yptr_bkp_lo8
	pop	__r_pow_of_two
	pop	__r_buffer_byte
	pop	__r_flash_byte
	pop	__r_bit_counter

	ret



/*
 *	the 22 is the end of string.
 */
;.data	/* put these in the .data segment	*/
power_of_two:
	.byte 1,22
	.byte 2,22
	.byte 4,22
	.byte 8,22
	.byte 6,1,22
	.byte 2,3,22
	.byte 4,6,22
	.byte 8,2,1,22
	.byte 6,5,2,22
	.byte 2,1,5,22
	.byte 4,2,0,1,22
	.byte 8,4,0,2,22
	.byte 6,9,0,4,22
	.byte 2,9,1,8,22
	.byte 4,8,3,6,1,22
	.byte 8,6,7,2,3,22
	.byte 6,3,5,5,6,22
	.byte 2,7,0,1,3,1,22
	.byte 4,4,1,2,6,2,22
	.byte 8,8,2,4,2,5,22
	.byte 6,7,5,8,4,0,1,22
	.byte 2,5,1,7,9,0,2,22
	.byte 4,0,3,4,9,1,4,22
	.byte 8,0,6,8,8,3,8,22
	.byte 6,1,2,7,7,7,6,1,22
	.byte 2,3,4,4,5,5,3,3,22
	.byte 4,6,8,8,0,1,7,6,22
	.byte 8,2,7,7,1,2,4,3,1,22
	.byte 6,5,4,5,3,4,8,6,2,22
	.byte 2,1,9,0,7,8,6,3,5,22
	.byte 4,2,8,1,4,7,3,7,0,1,22
	.byte 8,4,6,3,8,4,7,4,1,2,22


