# 1602 LCD Driver for Raspberry Pi Pico
![Raspberry Pi Pico with 1602 LCD](https://github.com/lofty-nz/1602_LCD_driver/blob/main/pico%201602lcd.jpg?raw=true)

This repository contains code and instructions for using a 1602 LCD with a Raspberry Pi Pico using MicroPython.

## Description

This project aims to control a 1602 LCD display via the I2C interface on the Raspberry Pi Pico W. The LCD uses a PCF8574T backpack to reduce the number of GPIOs required. The code in this repository is currently under development and we are facing an issue where the LCD does not display anything even though it works with an Arduino. The `i2c_scan` method does detect the LCD at address 0x27. The tutorial I'm following is here https://electrocredible.com/raspberry-pi-pico-lcd-16x2-i2c-pcf8574-micropython/

### Hardware Requirements

- Raspberry Pi Pico W
- 1602 LCD display
- PCF8574T Backpack

### Software Requirements

- MicroPython for Raspberry Pi Pico
- Thonny Python IDE
- Libraries: i2c_scan.py, lcd_api - https://github.com/T-622/RPI-PICO-I2C-LCD

## Connections

LCD / Backpack     >     RPi Pico W
VCC                      pin 40 (VBUS)
GND                      pin 38 (GND)
SDA                      pin 1  (GP0)
SCL                      pin 2  (GP1)

## Troubleshooting

The `i2c_scan` function returns the LCD address (0x27) which indicates the I2C communication is working, but the LCD still does not display any text, The contrast is set correctly seeing as it works with an Arduino Uno (see the arduino_code folder for the code i used) but not with the Raspberry Pi Pico W. Initially when trying to get it to work with arduino I had no success with any library until I cam across the 'Hangul' version. maybe there is something different in that library that allows it to work? Maybe it has something to do with the IC on the backpack being a PC8574T and not PC8574.

Here is the debugging output from Thonny IDE when I run i2c_main.py:

Traceback (most recent call last):
  File "<stdin>", line 13, in <module>
  File "pico_i2c_lcd.py", line 23, in __init__
OSError: [Errno 5] EIO

Any help would be much appreciated.
