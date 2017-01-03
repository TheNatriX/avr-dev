;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2005-01-11 10:31 ******* Source: ATmega32.xml ************
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "m32def.inc"
;* Title             : Register/Bit Definitions for the ATmega32
;* Date              : 2005-01-11
;* Version           : 2.14
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATmega32
;* 
;* DESCRIPTION
;* When including this file in the assembly program file all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;* The Register names are represented by their hexadecimal address.
;* 
;* The Register Bit names are represented by their bit number (0-7).
;* 
;* Please observe the difference in using the bit names with instructions
;* such as "sbr"/"cbr" (set/clear bit in register) and "sbrs"/"sbrc"
;* (skip if bit in register set/cleared). The following example illustrates
;* this:
;* 
;* in    r16PORTB             ;read PORTB latch
;* out   PORTBr16             ;output to PORTB
;* 
;* in    r16TIFR              ;read the Timer Interrupt Flag Register
;* rjmp  TOV0_is_set           ;jump if set
;* ...                         ;otherwise do something else
;*************************************************************************




; ***** SPECIFY DEVICE ***************************************************
#define	SIGNATURE_000	 0x1e
#define	SIGNATURE_001	 0x95
#define	SIGNATURE_002	 0x02



; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
#define	SREG	 0x3f
#define	SPH	 0x3e
#define	SPL	 0x3d
#define	OCR0	 0x3c
#define	GICR	 0x3b
#define	GIFR	 0x3a
#define	TIMSK	 0x39
#define	TIFR	 0x38
#define	SPMCR	 0x37
#define	TWCR	 0x36
#define	MCUCR	 0x35
#define	MCUCSR	 0x34
#define	TCCR0	 0x33
#define	TCNT0	 0x32
#define	OSCCAL	 0x31
#define	OCDR	 0x31
#define	SFIOR	 0x30
#define	TCCR1A	 0x2f
#define	TCCR1B	 0x2e
#define	TCNT1H	 0x2d
#define	TCNT1L	 0x2c
#define	OCR1AH	 0x2b
#define	OCR1AL	 0x2a
#define	OCR1BH	 0x29
#define	OCR1BL	 0x28
#define	ICR1H	 0x27
#define	ICR1L	 0x26
#define	TCCR2	 0x25
#define	TCNT2	 0x24
#define	OCR2	 0x23
#define	ASSR	 0x22
#define	WDTCR	 0x21
#define	UBRRH	 0x20
#define	UCSRC	 0x20
#define	EEARH	 0x1f
#define	EEARL	 0x1e
#define	EEDR	 0x1d
#define	EECR	 0x1c
#define	PORTA	 0x1b
#define	DDRA	 0x1a
#define	PINA	 0x19
#define	PORTB	 0x18
#define	DDRB	 0x17
#define	PINB	 0x16
#define	PORTC	 0x15
#define	DDRC	 0x14
#define	PINC	 0x13
#define	PORTD	 0x12
#define	DDRD	 0x11
#define	PIND	 0x10
#define	SPDR	 0x0f
#define	SPSR	 0x0e
#define	SPCR	 0x0d
#define	UDR	 0x0c
#define	UCSRA	 0x0b
#define	UCSRB	 0x0a
#define	UBRRL	 0x09
#define	ACSR	 0x08
#define	ADMUX	 0x07
#define	ADCSRA	 0x06
#define	ADCH	 0x05
#define	ADCL	 0x04
#define	TWDR	 0x03
#define	TWAR	 0x02
#define	TWSR	 0x01
#define	TWBR	 0x00


; ***** BIT DEFINITIONS **************************************************

; ***** EEPROM ***********************
; EEDR - EEPROM Data Register
#define	EEDR0	 0	; EEPROM Data Register bit 0
#define	EEDR1	 1	; EEPROM Data Register bit 1
#define	EEDR2	 2	; EEPROM Data Register bit 2
#define	EEDR3	 3	; EEPROM Data Register bit 3
#define	EEDR4	 4	; EEPROM Data Register bit 4
#define	EEDR5	 5	; EEPROM Data Register bit 5
#define	EEDR6	 6	; EEPROM Data Register bit 6
#define	EEDR7	 7	; EEPROM Data Register bit 7

; EECR - EEPROM Control Register
#define	EERE	 0	; EEPROM Read Enable
#define	EEWE	 1	; EEPROM Write Enable
#define	EEMWE	 2	; EEPROM Master Write Enable
#define	EERIE	 3	; EEPROM Ready Interrupt Enable


; ***** WATCHDOG *********************
; WDTCR - Watchdog Timer Control Register
#define	WDP0	 0	; Watch Dog Timer Prescaler bit 0
#define	WDP1	 1	; Watch Dog Timer Prescaler bit 1
#define	WDP2	 2	; Watch Dog Timer Prescaler bit 2
#define	WDE	 3	; Watch Dog Enable
#define	WDTOE	 4	; RW
#define	WDDE	 WDTOE	; For compatibility


; ***** EXTERNAL_INTERRUPT ***********
; GICR - General Interrupt Control Register
#define	GIMSK	 GICR	; For compatibility
#define	IVCE	 0	; Interrupt Vector Change Enable
#define	IVSEL	 1	; Interrupt Vector Select
#define	INT2	 5	; External Interrupt Request 2 Enable
#define	INT0	 6	; External Interrupt Request 0 Enable
#define	INT1	 7	; External Interrupt Request 1 Enable

; GIFR - General Interrupt Flag Register
#define	INTF2	 5	; External Interrupt Flag 2
#define	INTF0	 6	; External Interrupt Flag 0
#define	INTF1	 7	; External Interrupt Flag 1

; MCUCR - General Interrupt Control Register
#define	ISC00	 0	; Interrupt Sense Control 0 Bit 0
#define	ISC01	 1	; Interrupt Sense Control 0 Bit 1
#define	ISC10	 2	; Interrupt Sense Control 1 Bit 0
#define	ISC11	 3	; Interrupt Sense Control 1 Bit 1

; MCUCSR - MCU Control And Status Register
#define	ISC2	 6	; Interrupt Sense Control 2


; ***** TIMER_COUNTER_0 **************
; TCCR0 - Timer/Counter Control Register
#define	CS00	 0	; Clock Select 1
#define	CS01	 1	; Clock Select 1
#define	CS02	 2	; Clock Select 2
#define	WGM01	 3	; Waveform Generation Mode 1
#define	CTC0	 WGM01	; For compatibility
#define	COM00	 4	; Compare match Output Mode 0
#define	COM01	 5	; Compare Match Output Mode 1
#define	WGM00	 6	; Waveform Generation Mode
#define	PWM0	 WGM00	; For compatibility
#define	FOC0	 7	; Force Output Compare

; TCNT0 - Timer/Counter Register
#define	TCNT0_0	 0	; 
#define	TCNT0_1	 1	; 
#define	TCNT0_2	 2	; 
#define	TCNT0_3	 3	; 
#define	TCNT0_4	 4	; 
#define	TCNT0_5	 5	; 
#define	TCNT0_6	 6	; 
#define	TCNT0_7	 7	; 

; OCR0 - Output Compare Register
#define	OCR0_0	 0	; 
#define	OCR0_1	 1	; 
#define	OCR0_2	 2	; 
#define	OCR0_3	 3	; 
#define	OCR0_4	 4	; 
#define	OCR0_5	 5	; 
#define	OCR0_6	 6	; 
#define	OCR0_7	 7	; 

; TIMSK - Timer/Counter Interrupt Mask Register
#define	TOIE0	 0	; Timer/Counter0 Overflow Interrupt Enable
#define	OCIE0	 1	; Timer/Counter0 Output Compare Match Interrupt register

; TIFR - Timer/Counter Interrupt Flag register
#define	TOV0	 0	; Timer/Counter0 Overflow Flag
#define	OCF0	 1	; Output Compare Flag 0


; ***** TIMER_COUNTER_2 **************
; TIMSK - Timer/Counter Interrupt Mask register
#define	TOIE2	 6	; Timer/Counter2 Overflow Interrupt Enable
#define	OCIE2	 7	; Timer/Counter2 Output Compare Match Interrupt Enable

; TIFR - Timer/Counter Interrupt Flag Register
#define	TOV2	 6	; Timer/Counter2 Overflow Flag
#define	OCF2	 7	; Output Compare Flag 2

; TCCR2 - Timer/Counter2 Control Register
#define	CS20	 0	; Clock Select bit 0
#define	CS21	 1	; Clock Select bit 1
#define	CS22	 2	; Clock Select bit 2
#define	CTC2	 3	; Clear Timer/Counter2 on Compare Match
#define	COM20	 4	; Compare Output Mode bit 0
#define	COM21	 5	; Compare Output Mode bit 1
#define	PWM2	 6	; Pulse Width Modulator Enable
#define	FOC2	 7	; Force Output Compare

; TCNT2 - Timer/Counter2
#define	TCNT2_0	 0	; Timer/Counter 2 bit 0
#define	TCNT2_1	 1	; Timer/Counter 2 bit 1
#define	TCNT2_2	 2	; Timer/Counter 2 bit 2
#define	TCNT2_3	 3	; Timer/Counter 2 bit 3
#define	TCNT2_4	 4	; Timer/Counter 2 bit 4
#define	TCNT2_5	 5	; Timer/Counter 2 bit 5
#define	TCNT2_6	 6	; Timer/Counter 2 bit 6
#define	TCNT2_7	 7	; Timer/Counter 2 bit 7

; OCR2 - Timer/Counter2 Output Compare Register
#define	OCR2_0	 0	; Timer/Counter2 Output Compare Register Bit 0
#define	OCR2_1	 1	; Timer/Counter2 Output Compare Register Bit 1
#define	OCR2_2	 2	; Timer/Counter2 Output Compare Register Bit 2
#define	OCR2_3	 3	; Timer/Counter2 Output Compare Register Bit 3
#define	OCR2_4	 4	; Timer/Counter2 Output Compare Register Bit 4
#define	OCR2_5	 5	; Timer/Counter2 Output Compare Register Bit 5
#define	OCR2_6	 6	; Timer/Counter2 Output Compare Register Bit 6
#define	OCR2_7	 7	; Timer/Counter2 Output Compare Register Bit 7

; ASSR - Asynchronous Status Register
#define	TCR2UB	 0	; Timer/counter Control Register2 Update Busy
#define	OCR2UB	 1	; Output Compare Register2 Update Busy
#define	TCN2UB	 2	; Timer/Counter2 Update Busy
#define	AS2	 3	; Asynchronous Timer/counter2


; ***** TIMER_COUNTER_1 **************
; TIMSK - Timer/Counter Interrupt Mask Register
#define	TOIE1	 2	; Timer/Counter1 Overflow Interrupt Enable
#define	OCIE1B	 3	; Timer/Counter1 Output CompareB Match Interrupt Enable
#define	OCIE1A	 4	; Timer/Counter1 Output CompareA Match Interrupt Enable
#define	TICIE1	 5	; Timer/Counter1 Input Capture Interrupt Enable

; TIFR - Timer/Counter Interrupt Flag register
#define	TOV1	 2	; Timer/Counter1 Overflow Flag
#define	OCF1B	 3	; Output Compare Flag 1B
#define	OCF1A	 4	; Output Compare Flag 1A
#define	ICF1	 5	; Input Capture Flag 1

; TCCR1A - Timer/Counter1 Control Register A
#define	WGM10	 0	; Waveform Generation Mode
#define	PWM10	 WGM10	; For compatibility
#define	WGM11	 1	; Waveform Generation Mode
#define	PWM11	 WGM11	; For compatibility
#define	FOC1B	 2	; Force Output Compare 1B
#define	FOC1A	 3	; Force Output Compare 1A
#define	COM1B0	 4	; Compare Output Mode 1B, bit 0
#define	COM1B1	 5	; Compare Output Mode 1B, bit 1
#define	COM1A0	 6	; Comparet Ouput Mode 1A, bit 0
#define	COM1A1	 7	; Compare Output Mode 1A, bit 1

; TCCR1B - Timer/Counter1 Control Register B
#define	CS10	 0	; Prescaler source of Timer/Counter 1
#define	CS11	 1	; Prescaler source of Timer/Counter 1
#define	CS12	 2	; Prescaler source of Timer/Counter 1
#define	WGM12	 3	; Waveform Generation Mode
#define	CTC10	 WGM12	; For compatibility
#define	CTC1	 WGM12	; For compatibility
#define	WGM13	 4	; Waveform Generation Mode
#define	CTC11	 WGM13	; For compatibility
#define	ICES1	 6	; Input Capture 1 Edge Select
#define	ICNC1	 7	; Input Capture 1 Noise Canceler


; ***** SPI **************************
; SPDR - SPI Data Register
#define	SPDR0	 0	; SPI Data Register bit 0
#define	SPDR1	 1	; SPI Data Register bit 1
#define	SPDR2	 2	; SPI Data Register bit 2
#define	SPDR3	 3	; SPI Data Register bit 3
#define	SPDR4	 4	; SPI Data Register bit 4
#define	SPDR5	 5	; SPI Data Register bit 5
#define	SPDR6	 6	; SPI Data Register bit 6
#define	SPDR7	 7	; SPI Data Register bit 7

; SPSR - SPI Status Register
#define	SPI2X	 0	; Double SPI Speed Bit
#define	WCOL	 6	; Write Collision Flag
#define	SPIF	 7	; SPI Interrupt Flag

; SPCR - SPI Control Register
#define	SPR0	 0	; SPI Clock Rate Select 0
#define	SPR1	 1	; SPI Clock Rate Select 1
#define	CPHA	 2	; Clock Phase
#define	CPOL	 3	; Clock polarity
#define	MSTR	 4	; Master/Slave Select
#define	DORD	 5	; Data Order
#define	SPE	 6	; SPI Enable
#define	SPIE	 7	; SPI Interrupt Enable


; ***** USART ************************
; UDR - USART I/O Data Register
#define	UDR0	 0	; USART I/O Data Register bit 0
#define	UDR1	 1	; USART I/O Data Register bit 1
#define	UDR2	 2	; USART I/O Data Register bit 2
#define	UDR3	 3	; USART I/O Data Register bit 3
#define	UDR4	 4	; USART I/O Data Register bit 4
#define	UDR5	 5	; USART I/O Data Register bit 5
#define	UDR6	 6	; USART I/O Data Register bit 6
#define	UDR7	 7	; USART I/O Data Register bit 7

; UCSRA - USART Control and Status Register A
#define	USR	 UCSRA	; For compatibility
#define	MPCM	 0	; Multi-processor Communication Mode
#define	U2X	 1	; Double the USART transmission speed
#define	UPE	 2	; Parity Error
#define	PE	 UPE	; For compatibility
#define	DOR	 3	; Data overRun
#define	FE	 4	; Framing Error
#define	UDRE	 5	; USART Data Register Empty
#define	TXC	 6	; USART Transmitt Complete
#define	RXC	 7	; USART Receive Complete

; UCSRB - USART Control and Status Register B
#define	UCR	 UCSRB	; For compatibility
#define	TXB8	 0	; Transmit Data Bit 8
#define	RXB8	 1	; Receive Data Bit 8
#define	UCSZ2	 2	; Character Size
#define	CHR9	 UCSZ2	; For compatibility
#define	TXEN	 3	; Transmitter Enable
#define	RXEN	 4	; Receiver Enable
#define	UDRIE	 5	; USART Data register Empty Interrupt Enable
#define	TXCIE	 6	; TX Complete Interrupt Enable
#define	RXCIE	 7	; RX Complete Interrupt Enable

; UCSRC - USART Control and Status Register C
#define	UCPOL	 0	; Clock Polarity
#define	UCSZ0	 1	; Character Size
#define	UCSZ1	 2	; Character Size
#define	USBS	 3	; Stop Bit Select
#define	UPM0	 4	; Parity Mode Bit 0
#define	UPM1	 5	; Parity Mode Bit 1
#define	UMSEL	 6	; USART Mode Select
#define	URSEL	 7	; Register Select

#define	UBRRHI	 UBRRH	; For compatibility

; ***** TWI **************************
; TWBR - TWI Bit Rate register
#define	TWBR0	 0	; 
#define	TWBR1	 1	; 
#define	TWBR2	 2	; 
#define	TWBR3	 3	; 
#define	TWBR4	 4	; 
#define	TWBR5	 5	; 
#define	TWBR6	 6	; 
#define	TWBR7	 7	; 

; TWCR - TWI Control Register
#define	TWIE	 0	; TWI Interrupt Enable
#define	TWEN	 2	; TWI Enable Bit
#define	TWWC	 3	; TWI Write Collition Flag
#define	TWSTO	 4	; TWI Stop Condition Bit
#define	TWSTA	 5	; TWI Start Condition Bit
#define	TWEA	 6	; TWI Enable Acknowledge Bit
#define	TWINT	 7	; TWI Interrupt Flag

; TWSR - TWI Status Register
#define	TWS3	 3	; TWI Status
#define	TWS4	 4	; TWI Status
#define	TWS5	 5	; TWI Status
#define	TWS6	 6	; TWI Status
#define	TWS7	 7	; TWI Status

; TWDR - TWI Data register
#define	TWD0	 0	; TWI Data Register Bit 0
#define	TWD1	 1	; TWI Data Register Bit 1
#define	TWD2	 2	; TWI Data Register Bit 2
#define	TWD3	 3	; TWI Data Register Bit 3
#define	TWD4	 4	; TWI Data Register Bit 4
#define	TWD5	 5	; TWI Data Register Bit 5
#define	TWD6	 6	; TWI Data Register Bit 6
#define	TWD7	 7	; TWI Data Register Bit 7

; TWAR - TWI (Slave) Address register
#define	TWGCE	 0	; TWI General Call Recognition Enable Bit
#define	TWA0	 1	; TWI (Slave) Address register Bit 0
#define	TWA1	 2	; TWI (Slave) Address register Bit 1
#define	TWA2	 3	; TWI (Slave) Address register Bit 2
#define	TWA3	 4	; TWI (Slave) Address register Bit 3
#define	TWA4	 5	; TWI (Slave) Address register Bit 4
#define	TWA5	 6	; TWI (Slave) Address register Bit 5
#define	TWA6	 7	; TWI (Slave) Address register Bit 6


; ***** ANALOG_COMPARATOR ************
; SFIOR - Special Function IO Register
#define	ACME	 3	; Analog Comparator Multiplexer Enable

; ACSR - Analog Comparator Control And Status Register
#define	ACIS0	 0	; Analog Comparator Interrupt Mode Select bit 0
#define	ACIS1	 1	; Analog Comparator Interrupt Mode Select bit 1
#define	ACIC	 2	; Analog Comparator Input Capture Enable
#define	ACIE	 3	; Analog Comparator Interrupt Enable
#define	ACI	 4	; Analog Comparator Interrupt Flag
#define	ACO	 5	; Analog Compare Output
#define	ACBG	 6	; Analog Comparator Bandgap Select
#define	ACD	 7	; Analog Comparator Disable


; ***** AD_CONVERTER *****************
; ADMUX - The ADC multiplexer Selection Register
#define	MUX0	 0	; Analog Channel and Gain Selection Bits
#define	MUX1	 1	; Analog Channel and Gain Selection Bits
#define	MUX2	 2	; Analog Channel and Gain Selection Bits
#define	MUX3	 3	; Analog Channel and Gain Selection Bits
#define	MUX4	 4	; Analog Channel and Gain Selection Bits
#define	ADLAR	 5	; Left Adjust Result
#define	REFS0	 6	; Reference Selection Bit 0
#define	REFS1	 7	; Reference Selection Bit 1

; ADCSRA - The ADC Control and Status register
#define	ADPS0	 0	; ADC  Prescaler Select Bits
#define	ADPS1	 1	; ADC  Prescaler Select Bits
#define	ADPS2	 2	; ADC  Prescaler Select Bits
#define	ADIE	 3	; ADC Interrupt Enable
#define	ADIF	 4	; ADC Interrupt Flag
#define	ADATE	 5	; When this bit is written to one,the Timer/Counter2 prescaler will be reset.The bit will be cleared by hardware after the operation is performed.Writing a zero to this bit will have no effect.This bit will always be read as zero if Timer/Counter2 is clocked by the internal CPU clock.If this bit is written when Timer/Counter2 is operating in asynchronous mode,the bit will remain one until the prescaler has been reset.
#define	ADFR	 ADATE	; For compatibility
#define	ADSC	 6	; ADC Start Conversion
#define	ADEN	 7	; ADC Enable

; ADCH - ADC Data Register High Byte
#define	ADCH0	 0	; ADC Data Register High Byte Bit 0
#define	ADCH1	 1	; ADC Data Register High Byte Bit 1
#define	ADCH2	 2	; ADC Data Register High Byte Bit 2
#define	ADCH3	 3	; ADC Data Register High Byte Bit 3
#define	ADCH4	 4	; ADC Data Register High Byte Bit 4
#define	ADCH5	 5	; ADC Data Register High Byte Bit 5
#define	ADCH6	 6	; ADC Data Register High Byte Bit 6
#define	ADCH7	 7	; ADC Data Register High Byte Bit 7

; ADCL - ADC Data Register Low Byte
#define	ADCL0	 0	; ADC Data Register Low Byte Bit 0
#define	ADCL1	 1	; ADC Data Register Low Byte Bit 1
#define	ADCL2	 2	; ADC Data Register Low Byte Bit 2
#define	ADCL3	 3	; ADC Data Register Low Byte Bit 3
#define	ADCL4	 4	; ADC Data Register Low Byte Bit 4
#define	ADCL5	 5	; ADC Data Register Low Byte Bit 5
#define	ADCL6	 6	; ADC Data Register Low Byte Bit 6
#define	ADCL7	 7	; ADC Data Register Low Byte Bit 7


; ***** PORTA ************************
; PORTA - Port A Data Register
#define	PORTA0	 0	; Port A Data Register bit 0
#define	PA0	 0	; For compatibility
#define	PORTA1	 1	; Port A Data Register bit 1
#define	PA1	 1	; For compatibility
#define	PORTA2	 2	; Port A Data Register bit 2
#define	PA2	 2	; For compatibility
#define	PORTA3	 3	; Port A Data Register bit 3
#define	PA3	 3	; For compatibility
#define	PORTA4	 4	; Port A Data Register bit 4
#define	PA4	 4	; For compatibility
#define	PORTA5	 5	; Port A Data Register bit 5
#define	PA5	 5	; For compatibility
#define	PORTA6	 6	; Port A Data Register bit 6
#define	PA6	 6	; For compatibility
#define	PORTA7	 7	; Port A Data Register bit 7
#define	PA7	 7	; For compatibility

; DDRA - Port A Data Direction Register
#define	DDA0	 0	; Data Direction Register, Port A, bit 0
#define	DDA1	 1	; Data Direction Register, Port A, bit 1
#define	DDA2	 2	; Data Direction Register, Port A, bit 2
#define	DDA3	 3	; Data Direction Register, Port A, bit 3
#define	DDA4	 4	; Data Direction Register, Port A, bit 4
#define	DDA5	 5	; Data Direction Register, Port A, bit 5
#define	DDA6	 6	; Data Direction Register, Port A, bit 6
#define	DDA7	 7	; Data Direction Register, Port A, bit 7

; PINA - Port A Input Pins
#define	PINA0	 0	; Input Pins, Port A bit 0
#define	PINA1	 1	; Input Pins, Port A bit 1
#define	PINA2	 2	; Input Pins, Port A bit 2
#define	PINA3	 3	; Input Pins, Port A bit 3
#define	PINA4	 4	; Input Pins, Port A bit 4
#define	PINA5	 5	; Input Pins, Port A bit 5
#define	PINA6	 6	; Input Pins, Port A bit 6
#define	PINA7	 7	; Input Pins, Port A bit 7


; ***** PORTB ************************
; PORTB - Port B Data Register
#define	PORTB0	 0	; Port B Data Register bit 0
#define	PB0	 0	; For compatibility
#define	PORTB1	 1	; Port B Data Register bit 1
#define	PB1	 1	; For compatibility
#define	PORTB2	 2	; Port B Data Register bit 2
#define	PB2	 2	; For compatibility
#define	PORTB3	 3	; Port B Data Register bit 3
#define	PB3	 3	; For compatibility
#define	PORTB4	 4	; Port B Data Register bit 4
#define	PB4	 4	; For compatibility
#define	PORTB5	 5	; Port B Data Register bit 5
#define	PB5	 5	; For compatibility
#define	PORTB6	 6	; Port B Data Register bit 6
#define	PB6	 6	; For compatibility
#define	PORTB7	 7	; Port B Data Register bit 7
#define	PB7	 7	; For compatibility

; DDRB - Port B Data Direction Register
#define	DDB0	 0	; Port B Data Direction Register bit 0
#define	DDB1	 1	; Port B Data Direction Register bit 1
#define	DDB2	 2	; Port B Data Direction Register bit 2
#define	DDB3	 3	; Port B Data Direction Register bit 3
#define	DDB4	 4	; Port B Data Direction Register bit 4
#define	DDB5	 5	; Port B Data Direction Register bit 5
#define	DDB6	 6	; Port B Data Direction Register bit 6
#define	DDB7	 7	; Port B Data Direction Register bit 7

; PINB - Port B Input Pins
#define	PINB0	 0	; Port B Input Pins bit 0
#define	PINB1	 1	; Port B Input Pins bit 1
#define	PINB2	 2	; Port B Input Pins bit 2
#define	PINB3	 3	; Port B Input Pins bit 3
#define	PINB4	 4	; Port B Input Pins bit 4
#define	PINB5	 5	; Port B Input Pins bit 5
#define	PINB6	 6	; Port B Input Pins bit 6
#define	PINB7	 7	; Port B Input Pins bit 7


; ***** PORTC ************************
; PORTC - Port C Data Register
#define	PORTC0	 0	; Port C Data Register bit 0
#define	PC0	 0	; For compatibility
#define	PORTC1	 1	; Port C Data Register bit 1
#define	PC1	 1	; For compatibility
#define	PORTC2	 2	; Port C Data Register bit 2
#define	PC2	 2	; For compatibility
#define	PORTC3	 3	; Port C Data Register bit 3
#define	PC3	 3	; For compatibility
#define	PORTC4	 4	; Port C Data Register bit 4
#define	PC4	 4	; For compatibility
#define	PORTC5	 5	; Port C Data Register bit 5
#define	PC5	 5	; For compatibility
#define	PORTC6	 6	; Port C Data Register bit 6
#define	PC6	 6	; For compatibility
#define	PORTC7	 7	; Port C Data Register bit 7
#define	PC7	 7	; For compatibility

; DDRC - Port C Data Direction Register
#define	DDC0	 0	; Port C Data Direction Register bit 0
#define	DDC1	 1	; Port C Data Direction Register bit 1
#define	DDC2	 2	; Port C Data Direction Register bit 2
#define	DDC3	 3	; Port C Data Direction Register bit 3
#define	DDC4	 4	; Port C Data Direction Register bit 4
#define	DDC5	 5	; Port C Data Direction Register bit 5
#define	DDC6	 6	; Port C Data Direction Register bit 6
#define	DDC7	 7	; Port C Data Direction Register bit 7

; PINC - Port C Input Pins
#define	PINC0	 0	; Port C Input Pins bit 0
#define	PINC1	 1	; Port C Input Pins bit 1
#define	PINC2	 2	; Port C Input Pins bit 2
#define	PINC3	 3	; Port C Input Pins bit 3
#define	PINC4	 4	; Port C Input Pins bit 4
#define	PINC5	 5	; Port C Input Pins bit 5
#define	PINC6	 6	; Port C Input Pins bit 6
#define	PINC7	 7	; Port C Input Pins bit 7


; ***** PORTD ************************
; PORTD - Port D Data Register
#define	PORTD0	 0	; Port D Data Register bit 0
#define	PD0	 0	; For compatibility
#define	PORTD1	 1	; Port D Data Register bit 1
#define	PD1	 1	; For compatibility
#define	PORTD2	 2	; Port D Data Register bit 2
#define	PD2	 2	; For compatibility
#define	PORTD3	 3	; Port D Data Register bit 3
#define	PD3	 3	; For compatibility
#define	PORTD4	 4	; Port D Data Register bit 4
#define	PD4	 4	; For compatibility
#define	PORTD5	 5	; Port D Data Register bit 5
#define	PD5	 5	; For compatibility
#define	PORTD6	 6	; Port D Data Register bit 6
#define	PD6	 6	; For compatibility
#define	PORTD7	 7	; Port D Data Register bit 7
#define	PD7	 7	; For compatibility

; DDRD - Port D Data Direction Register
#define	DDD0	 0	; Port D Data Direction Register bit 0
#define	DDD1	 1	; Port D Data Direction Register bit 1
#define	DDD2	 2	; Port D Data Direction Register bit 2
#define	DDD3	 3	; Port D Data Direction Register bit 3
#define	DDD4	 4	; Port D Data Direction Register bit 4
#define	DDD5	 5	; Port D Data Direction Register bit 5
#define	DDD6	 6	; Port D Data Direction Register bit 6
#define	DDD7	 7	; Port D Data Direction Register bit 7

; PIND - Port D Input Pins
#define	PIND0	 0	; Port D Input Pins bit 0
#define	PIND1	 1	; Port D Input Pins bit 1
#define	PIND2	 2	; Port D Input Pins bit 2
#define	PIND3	 3	; Port D Input Pins bit 3
#define	PIND4	 4	; Port D Input Pins bit 4
#define	PIND5	 5	; Port D Input Pins bit 5
#define	PIND6	 6	; Port D Input Pins bit 6
#define	PIND7	 7	; Port D Input Pins bit 7


; ***** CPU **************************
; SREG - Status Register
#define	SREG_C	 0	; Carry Flag
#define	SREG_Z	 1	; Zero Flag
#define	SREG_N	 2	; Negative Flag
#define	SREG_V	 3	; Two's Complement Overflow Flag
#define	SREG_S	 4	; Sign Bit
#define	SREG_H	 5	; Half Carry Flag
#define	SREG_T	 6	; Bit Copy Storage
#define	SREG_I	 7	; Global Interrupt Enable

; MCUCR - MCU Control Register
;#define	ISC00	 0	; Interrupt Sense Control 0 Bit 0
;#define	ISC01	 1	; Interrupt Sense Control 0 Bit 1
;#define	ISC10	 2	; Interrupt Sense Control 1 Bit 0
;#define	ISC11	 3	; Interrupt Sense Control 1 Bit 1
#define	SM0	 4	; Sleep Mode Select
#define	SM1	 5	; Sleep Mode Select
#define	SM2	 6	; Sleep Mode Select
#define	SE	 7	; Sleep Enable

; MCUCSR - MCU Control And Status Register
#define	MCUSR	 MCUCSR	; For compatibility
#define	PORF	 0	; Power-on reset flag
#define	EXTRF	 1	; External Reset Flag
#define	BORF	 2	; Brown-out Reset Flag
#define	WDRF	 3	; Watchdog Reset Flag
#define	JTRF	 4	; JTAG Reset Flag
#define	JTD	 7	; JTAG Interface Disable

; OSCCAL - Oscillator Calibration Value
#define	CAL0	 0	; Oscillator Calibration Value Bit0
#define	CAL1	 1	; Oscillator Calibration Value Bit1
#define	CAL2	 2	; Oscillator Calibration Value Bit2
#define	CAL3	 3	; Oscillator Calibration Value Bit3
#define	CAL4	 4	; Oscillator Calibration Value Bit4
#define	CAL5	 5	; Oscillator Calibration Value Bit5
#define	CAL6	 6	; Oscillator Calibration Value Bit6
#define	CAL7	 7	; Oscillator Calibration Value Bit7

; SFIOR - Special Function IO Register
#define	PSR10	 0	; Prescaler Reset Timer/Counter1&0
#define	PSR2	 1	; Prescaler Reset Timer/Counter2
#define	PUD	 2	; Pull-up Disable
#define	ADTS0	 5	; ADC Auto Trigger Source 0
#define	ADTS1	 6	; ADC Auto Trigger Source 1
#define	ADTS2	 7	; ADC Auto Trigger Source 2


; ***** BOOT_LOAD ********************
; SPMCR - Store Program Memory Control Register
#define	SPMEN	 0	; Store Program Memory Enable
#define	PGERS	 1	; Page Erase
#define	PGWRT	 2	; Page Write
#define	BLBSET	 3	; Boot Lock Bit Set
#define	RWWSRE	 4	; Read While Write secion read enable
#define	ASRE	 RWWSRE	; For compatibility
#define	RWWSB	 6	; Read While Write Section Busy
#define	ASB	 RWWSB	; For compatibility
#define	SPMIE	 7	; SPM Interrupt Enable



; ***** LOCKSBITS ********************************************************
#define	LB1	 0	; Lock bit
#define	LB2	 1	; Lock bit
#define	BLB01	 2	; Boot Lock bit
#define	BLB02	 3	; Boot Lock bit
#define	BLB11	 4	; Boot lock bit
#define	BLB12	 5	; Boot lock bit


; ***** FUSES ************************************************************
; LOW fuse bits
#define	CKSEL0	 0	; Select Clock Source
#define	CKSEL1	 1	; Select Clock Source
#define	CKSEL2	 2	; Select Clock Source
#define	CKSEL3	 3	; Select Clock Source
#define	BODEN	 6	; Brown out detector enable
#define	BODLEVEL 7	; Brown out detector trigger level

; HIGH fuse bits
#define	BOOTRST	 0	; Select Reset Vector
#define	BOOTSZ0	 1	; Select Boot Size
#define	BOOTSZ1	 2	; Select Boot Size
#define	EESAVE	 3	; EEPROM memory is preserved through chip erase
#define	SPIEN	 5	; Enable Serial programming and Data Downloading
#define	JTAGEN	 6	; Enable JTAG
#define	OCDEN	 7	; Enable OCD



; ***** CPU REGISTER DEFINITIONS *****************************************
#define	XH	 r27
#define	XL	 r26
#define	YH	 r29
#define	YL	 r28
#define	ZH	 r31
#define	ZL	 r30



; ***** DATA MEMORY DECLARATIONS *****************************************
#define	FLASHEND	 0x3fff	; Note: Word address
#define	IOEND		 0x003f
#define	SRAM_START	 0x0060
#define	SRAM_SIZE	 2048
#define	RAMEND		 0x085f
#define	XRAMEND	 	 0x0000
#define	E2END	 	 0x03ff
#define	EEPROMEND	 0x03ff
#define	EEADRBITS	 10



; ***** BOOTLOADER DECLARATIONS ******************************************
#define	NRWW_START_ADDR	 0x3800
#define	NRWW_STOP_ADDR	 0x3fff
#define	RWW_START_ADDR	 0x0
#define	RWW_STOP_ADDR	 0x37ff
#define	PAGESIZE	 64
#define	FIRSTBOOTSTART	 0x3f00
#define	SECONDBOOTSTART	 0x3e00
#define	THIRDBOOTSTART	 0x3c00
#define	FOURTHBOOTSTART	 0x3800
#define	SMALLBOOTSTART	 FIRSTBOOTSTART
#define	LARGEBOOTSTART	 FOURTHBOOTSTART



; ***** INTERRUPT VECTORS ************************************************
#define	INT0addr	 0x0002	; External Interrupt Request 0
#define	INT1addr	 0x0004	; External Interrupt Request 1
#define	INT2addr	 0x0006	; External Interrupt Request 2
#define	OC2addr	 	 0x0008	; Timer/Counter2 Compare Match
#define	OVF2addr	 0x000a	; Timer/Counter2 Overflow
#define	ICP1addr	 0x000c	; Timer/Counter1 Capture Event
#define	OC1Aaddr	 0x000e	; Timer/Counter1 Compare Match A
#define	OC1Baddr	 0x0010	; Timer/Counter1 Compare Match B
#define	OVF1addr	 0x0012	; Timer/Counter1 Overflow
#define	OC0addr	 	 0x0014	; Timer/Counter0 Compare Match
#define	OVF0addr	 0x0016	; Timer/Counter0 Overflow
#define	SPIaddr		 0x0018	; Serial Transfer Complete
#define	URXCaddr	 0x001a	; USART, Rx Complete
#define	UDREaddr	 0x001c	; USART Data Register Empty
#define	UTXCaddr	 0x001e	; USART, Tx Complete
#define	ADCCaddr	 0x0020	; ADC Conversion Complete
#define	ERDYaddr	 0x0022	; EEPROM Ready
#define	ACIaddr	 	 0x0024	; Analog Comparator
#define	TWIaddr		 0x0026	; 2-wire Serial Interface
#define	SPMRaddr	 0x0028	; Store Program Memory Ready

#define	INT_VECTORS_SIZE	 42	; size in words


; ***** END OF FILE ******************************************************
