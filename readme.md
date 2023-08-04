# 1602 LCD Driver for Raspberry Pi Pico
![Raspberry Pi Pico with 1602 LCD](https://github.com/lofty-nz/1602_LCD_driver/blob/main/pico%201602lcd.jpg?raw=true)


This repository contains code and instructions for using a 1602 LCD with a Raspberry Pi Pico using MicroPython.

## Description

This project aims to control a 1602 LCD display via the I2C interface on the Raspberry Pi Pico. The LCD uses a PCF8574 backpack to reduce the number of GPIOs required. The code in this repository is currently under development and we are facing an issue where the LCD does not display anything even though it works with an Arduino. The `i2c_scan` method does detect the LCD at address 0x27.

### Hardware Requirements

- Raspberry Pi Pico
- 1602 LCD display
- PCF8574T Backpack

### Software Requirements

- MicroPython for Raspberry Pi Pico
- Thonny Python IDE
- Librarys: i2c_scan.py, lcd_api - link here https://github.com/T-622/RPI-PICO-I2C-LCD

## Connections

Backpack     >     RPi Pico W
VCC                pin 40 (VBUS)
GND                pin 38 (GND)
SDA                pin 1  (GP0)
SCL                pin 2  (GP1)

## Troubleshooting

If the `i2c_scan` function returns the LCD address (0x27), but the LCD does not display anything, make sure that the LCD is connected properly and the contrast is set correctly. If it works with an Arduino but not with the Raspberry Pi Pico, it could be a software issue.
