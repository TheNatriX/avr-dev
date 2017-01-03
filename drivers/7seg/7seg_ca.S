/*
 *	These functions return a value that can be writed out
 *	using 7 bit port and light up leds in a way that display digits.
 */


#define	__r_digit	r24



/*
 * uint8_t convert_to_7seg_ca( uint8_t digit );
 */
.global convert_to_7seg_ca
	convert_to_7seg_ca:
	rcall	convert_to_7seg_cc
	com	__r_digit
	ret

