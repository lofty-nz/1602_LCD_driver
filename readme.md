# 1602 LCD Driver for Raspberry Pi Pico
![Alt text]([URL](https://github.com/lofty-nz/1602_LCD_driver/blob/main/pico%201602lcd.jpg))

This repository contains code and instructions for using a 1602 LCD with a Raspberry Pi Pico using MicroPython.

## Description

This project aims to control a 1602 LCD display via the I2C interface on the Raspberry Pi Pico. The LCD uses a PCF8574 backpack to reduce the number of GPIOs required. The code in this repository is currently under development and we are facing an issue where the LCD does not display anything even though it works with an Arduino. The `i2c_scan` method does detect the LCD at address 0x27.

## Getting Started

### Hardware Requirements

- Raspberry Pi Pico
- 1602 LCD display
- PCF8574 Backpack

### Software Requirements

- MicroPython for Raspberry Pi Pico
- Thonny Python IDE (recommended)

### Setup and Installation

1. Connect the Raspberry Pi Pico to the PCF8574 backpack and 1602 LCD according to the tutorial [here](https://electrocredible.com/raspberry-pi-pico-lcd-16x2-i2c-pcf8574-micropython/).
2. Install MicroPython on the Raspberry Pi Pico as per the instructions [here](https://www.raspberrypi.org/documentation/rp2040/getting-started/#getting-started-with-micropython).
3. Clone this repository and open the code in the Thonny Python IDE.
4. Run the code.

## Troubleshooting

If the `i2c_scan` function returns the LCD address (0x27), but the LCD does not display anything, make sure that the LCD is connected properly and the contrast is set correctly. If it works with an Arduino but not with the Raspberry Pi Pico, it could be a software issue.

## Contributing

If you have suggestions for how to get the LCD working, or want to contribute to the code, feel free to open an issue or make a pull request!

## Contact

Please feel free to reach out by opening an issue in this repository if you have any questions or need support.
