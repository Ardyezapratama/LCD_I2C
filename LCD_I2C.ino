#include <LiquidCrystal_I2C.h>

int col = 16;
int row = 2;

LiquidCrystal_I2C lcd(0x27, col, row);

void printText(String text, int col, int row, int speed) {
  lcd.blink();
  lcd.setCursor(col, row);
  for (int i = 0; i < text.length(); i++) {
    lcd.print(text.charAt(i));
    delay(speed);
  }
}

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  printText("EzDev.", 0, 0, 500);
  delay(3000);
  lcd.clear();
  printText("Follow my TikTok", 0, 0, 200);
  printText("Thank You!!", 0, 1, 200);
  delay(3000);
  lcd.clear();
}