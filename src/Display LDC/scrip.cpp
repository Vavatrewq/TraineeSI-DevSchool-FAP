#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
	lcd.begin(16, 2);
}

void loop()
{
	lcd.clear();
	lcd.setCursor(4, 0);
  	lcd.print("Wagner");
  	lcd.setCursor(4, 1);
  	lcd.print("Universe");
	delay(5000);
  
}