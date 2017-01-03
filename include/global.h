/*
 *
 * About:	Global defines used around this project.
 *		NatriX 2014
 */


#ifndef __GLOBAL_H__
#define __GLOBAL_H__
#endif /* __GLOBAL_H__ */



/*	GCC Register Layout	*/

/*
 * TEMPORARY REGISTER.
 * Is used as scratch register that need not to be restored after
 * its usage. It must be saved and restored in interrupt service
 * routine's (ISR) prologue and epilogue.
 */
#define	__tmp_reg__	r0



/*
 * ZERO REGISTER.
 *
 * Always contains zero. During an insn the content might be destroyed,
 * e.g. by a MUL instruction that uses R0/R1 as implicit output register.
 * If an insn destroys R1, the insn must restore R1 to zero afterwards.
 * This register must be saved in ISR prologues and must then be set to
 * zero because R1 might contain values other than zero.
 * The ISR epilogue restores the value.
 */
#define	__zero_reg__	r1


/*
 * The T flag in the status register (SREG) is used in the same way like
 * the temporary scratch register R0.
 */


