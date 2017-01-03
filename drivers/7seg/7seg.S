/*
 *	These functions return a value that can be writed out
 *	using 7 bit port and light up leds in a way that display digits.
 */


#define	__r_digit	r24


/*
 * uint8_t convert_to_7seg_cc( uint8_t digit );
 */
.global convert_to_7seg_cc
	convert_to_7seg_cc:

	/* try to be more efficient
		if( __r_digit >= 5 )
			goto 5;		*/
	cpi	__r_digit, 5
	brsh	5f

	cpi	__r_digit, 0
	brne	1f
	ldi	__r_digit, 0x3f
	ret

1:	cpi	__r_digit, 1
	brne	2f
	ldi	__r_digit, 0x06
	ret

2:	cpi	__r_digit, 2
	brne	3f
	ldi	__r_digit, 0x5b
	ret

3:      cpi	__r_digit, 3
        brne	4f
        ldi	__r_digit, 0x4f
        ret

4:      cpi	__r_digit, 4
        brne	5f
        ldi	__r_digit, 0x66
        ret

5:      cpi	__r_digit, 5
        brne	6f
        ldi	__r_digit, 0x6d
        ret

6:      cpi	__r_digit, 6
        brne	7f
        ldi	__r_digit, 0x7d
        ret

7:      cpi	__r_digit, 7
        brne	8f
        ldi	__r_digit, 0x07
        ret

8:      cpi	__r_digit, 8
        brne	9f
        ldi	__r_digit, 0x7f
        ret

9:      cpi	__r_digit, 9
        brne	10f
        ldi	__r_digit, 0x6f
        ret

	/* print E if number is not in range */
10:	ldi	__r_digit, 0x79
	ret
