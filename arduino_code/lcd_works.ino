# Arduino uno to lcd connections - connections SDA - A4, SCL - A5

#include<LiquidCrystal_I2C_Hangul.h>
#include<Wire.h>
LiquidCrystal_I2C_Hangul lcd(0x27, 16, 2); // LCD class initialization
void setup() {
lcd.init();
lcd.backlight();
}
void loop() {
lcd.setCursor(1, 0); // (Column, Rows)
lcd.print("WOW IT WORKS !!");
}
