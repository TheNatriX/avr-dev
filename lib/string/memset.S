#include "config.h"
#include "global.h"


/*	Using GCC call compatibility	*/
#define	__r_buff_lo8			r24
#define	__r_buff_hi8			r25

#define	__r_uchar			r22

#define	__r_memsz_lo8			r20
#define	__r_memsz_hi8			r21



/*
 *	void * memset( void * buff, unsigned char c, size_t memsz )
 */
.global memset
	memset:
	movw	ZL, __r_buff_lo8
1:	/*	store character into ram	*/
	st	Z+, __r_uchar
	subi	__r_memsz_lo8, 1
	sbci	__r_memsz_hi8, 0
	brne	1b
	ret
