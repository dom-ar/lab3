#include <LiquidCrystal.h>
long t1_3;
int s, m, h;
//For calls Arduino UNO
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

//For tincercad.com Arduino UNO
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  analogWrite(10, 255);
  lcd.setCursor(0, 0);
  lcd.print("Domas 2003-07-11");
}

void loop() {
  	LAB3_3();
}

void LAB3_3() {
  long t2 = millis();
  if (t2 - t1_3 >= 1000) {
    s++;
    if (s > 59) {
      s = 0;
      m++;
      if (m > 59) {
        m = 0;
        h++;
        if (h > 23) s = m = h = 0;
      }
    }
    LCD_UPDATE();
    t1_3 = t2;
  }
}

void LCD_UPDATE() {
  char buffer[8];
  sprintf(buffer, "%02d:%02d:%02d", h, m, s);
  lcd.setCursor(0, 1);
  lcd.print(buffer);
}
