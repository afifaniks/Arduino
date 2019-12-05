#include <LiquidCrystal.h>

LiquidCrystal lcd(10, 9, 8, 7, 6, 5);

void setup()
{
  lcd.begin(16, 2);
  pinMode(A5, INPUT);  
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
}

void loop()
{
  float reading = analogRead(A5) * 0.004882814;
  reading = (reading - 0.5) * 100;
  
  lcd.setCursor(6, 0);
  lcd.print(reading);
}