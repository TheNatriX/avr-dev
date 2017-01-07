
MCU=atmega32
F_CPU=3686400

SRC=lib
BINDIR=bin

CC=avr-gcc
CFLAGS=-g3 -Os -I./include

AR=avr-ar
ARFLAGS=rcs

OBJCOPY=avr-objcopy

all:
	$(CC) $(CFLAGS) -c -mmcu=$(MCU) -DF_CPU=$(F_CPU) -o $(BINDIR)/hd44780.o $(SRC)/hd44780.S
	$(CC) $(CFLAGS) -c -mmcu=$(MCU) -DF_CPU=$(F_CPU) -o $(BINDIR)/lcd.o $(SRC)/lcd.c
	$(CC) $(CFLAGS) -c -mmcu=$(MCU) -DF_CPU=$(F_CPU) -o $(BINDIR)/delay_wrapper.o $(SRC)/delay_wrapper.c
	$(AR) $(ARFLAGS) $(BINDIR)/hd44780_$(MCU)_$(F_CPU).a $(BINDIR)/*.o
	$(CC) $(CFLAGS) -mmcu=$(MCU) -DF_CPU=$(F_CPU) -o $(BINDIR)/example.elf example.c $(BINDIR)/hd44780_$(MCU)_$(F_CPU).a
	$(OBJCOPY) -j .text -j .data -O ihex $(BINDIR)/example.elf $(BINDIR)/example.hex

clean:
	rm -f $(BINDIR)/*

