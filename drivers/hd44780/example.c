#define F_CPU 3686400

#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

void main(void)
{
	const char *p = "Hello World!!";
	lcd_init(LCD_SET_TWO_LINES);
	lcd_print(p);

	for (;;);
}


