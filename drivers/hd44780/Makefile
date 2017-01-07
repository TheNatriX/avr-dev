
MCU=atmega32
F_CPU=3686400

SRC=src
BINDIR=bin
FILE=hd44780.S
OBJ=hd44780.o

CC=avr-gcc
CFLAGS=-c -g3

all:
	$(CC) $(CFLAGS) -mmcu=$(MCU) -DF_CPU=$(F_CPU) -o $(BINDIR)/$(OBJ) $(SRC)/$(FILE)

clean:
	rm -f $(BINDIR)/*.o

