
MCU=atmega32
F_CPU=3686400

SRC=lib
BINDIR=bin

CC=avr-gcc
CFLAGS=-c -g3 -Os -I./include

AR=avr-ar
ARFLAGS=rcs

all:
	$(CC) $(CFLAGS) -mmcu=$(MCU) -DF_CPU=$(F_CPU) -o $(BINDIR)/hd44780_$(MCU)_$(F_CPU).o $(SRC)/hd44780.S
	$(CC) $(CFLAGS) -mmcu=$(MCU) -DF_CPU=$(F_CPU) -o $(BINDIR)/lcd_$(MCU)_$(F_CPU).o $(SRC)/lcd.c
	$(AR) $(ARFLAGS) $(BINDIR)/hd44780_$(MCU)_$(F_CPU).a $(BINDIR)/*.o
clean:
	rm -f $(BINDIR)/*

