#define F_CPU 3686400

#include <avr/io.h>
#include <util/delay.h>
#include "lcd2x16.h"

void main(void)
{
	char *p = "YO3IMR DE YO3HXT";
	lcd_init(LCD_SET_TWO_LINES);

	while (*p) {
		lcd_send_data(*p);
		p++;
	}
	for (;;);
}


