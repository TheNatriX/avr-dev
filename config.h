/*
 * About:	Global configuration.
 *
 *		NatriX 2014
 */


#include "atmega32.h"



#define CPU_FREQ		16000000

/* used in delay.S
   These two defines must be calculated for each CPU Freq as it follows:	*/
/* (2000 + 4000 * ONE_SEC_CNT_DWN + ONE_SEC_CNT_DWN * freq) / (1000 * freq) = 1	*/
/* QUICK:	16MHz = 999
		 1MHz = 996							*/
#define ONE_SEC_CNT_DWN		999
/* ONE_MS_CNT_DWN = (0.001 - 19/cpufreq) / (4/cpufreq)				*/
/* QUICK:	16MHz = 3996
		 1MHz = 245							*/
#define ONE_MS_CNT_DWN		3996


