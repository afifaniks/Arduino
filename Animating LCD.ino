#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup()
{
   lcd.begin(16, 2);
}

char text[] = {'I', ' ', 'L', 'o', 'v', 'e', ' ', 'y', 'o', 'u'};
char text2[] = {'S', 'u', 'n', 'f', 'l', 'o', 'w', 'e', 'r'};

int col = 0;
int row = 0;

void loop()
{
  lcd.setCursor(col, row);
  if (row == 0)
  	lcd.print(text[col]);
  else	lcd.print(text2[col]);
  delay(100);
  
  if (row == 0 && col == 9) {
    row = 1;
    col = 0;
  } else if (row ==1 && col == 8) {
    row = 0;
    col = 0;
    lcd.clear();
  }else {
    col += 1;
  }
}