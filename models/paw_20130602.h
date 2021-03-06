/* Filco Majestouch replacement controller board parameters. */

#ifndef paw_20130602_h__
#define paw_20130602_h__

#include "common.h"

#define STR_PRODUCT      L"Filco Majestouch"
#define PRODUCT_ID       0x047D

#define NUM_LOCK(x)    ((x) == ON ? (PORTC &= ~0b00100000) : (PORTC |= 0b00100000))
#define CAPS_LOCK(x)   ((x) == ON ? (PORTC &= ~0b01000000) : (PORTC |= 0b01000000))
#define SCROLL_LOCK(x) ((x) == ON ? (PORTB &= ~0b10000000) : (PORTB |= 0b10000000))

#define ROW_PORT  PORTD
#define ROW_MASK  0b01110111

#define ROW_BITS \
  {              \
    0b01110101,  \
    0b01000110,  \
    0b01010110,  \
    0b00000011,  \
    0b00010011,  \
    0b00100011,  \
    0b00110011,  \
    0b01000011,  \
    0b01010011,  \
    0b01100011,  \
    0b01000101,  \
    0b01110100,  \
    0b01100100,  \
    0b01010100,  \
    0b01000100,  \
    0b00010111,  \
    0b00000111,  \
    0b01110011,  \
    ROW_MASK     \
  }

#define COLUMN_PINS \
  {                 \
    {_PINC, _BIT2}, \
    {_PINB, _BIT1}, \
    {_PINB, _BIT2}, \
    {_PINB, _BIT3}, \
    {_PINC, _BIT7}, \
    {_PINB, _BIT6}, \
    {_PINB, _BIT5}, \
    {_PINB, _BIT4}  \
  }

#define INPUT_PINS               \
  {                              \
    {_DDRB, _PORTB, 0b01111110}, \
    {_DDRC, _PORTC, 0b10000100}, \
    {_DDRD, _PORTD, 0b00000000}  \
  }

#define OUTPUT_PINS              \
  {                              \
    {_DDRB, _PORTB, 0b10000000}, \
    {_DDRC, _PORTC, 0b01100000}, \
    {_DDRD, _PORTD, 0b01110111}  \
  }

#endif
