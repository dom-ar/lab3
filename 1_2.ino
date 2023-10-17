#include <LiquidCrystal.h>

//For calls Arduino UNO
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

//For tincercad.com Arduino UNO
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  analogWrite(10, 255);
}

void loop() {
	lcd.setCursor(0, 0);
    lcd.print("Domas Arimavic.");
  	lcd.setCursor(0, 1);
    lcd.print("IF2200045       ");
  	delay(700);
  	lcd.setCursor(0, 1);
    lcd.print("IF Sistemos 3 k.");
  	delay(700);
}
