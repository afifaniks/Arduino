#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
String names[] = {"Oyon", "Siam", "Sentu", "Rokib"};

void setup()
{
  lcd.begin(16, 2);
  lcd.print("I love you,");
}

int counter = 500, index = 0;

void loop()
{
  lcd.setCursor(0, 1);
  
  if (millis() >= counter) {
    counter += 500;
    if (index == 3)
      index = 0;
    else
      index++;
  }
  lcd.print(names[index]);
}