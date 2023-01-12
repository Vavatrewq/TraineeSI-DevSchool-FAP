#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
	Serial.begin(9600);
	lcd.begin(16, 2);
	lcd.clear();
}

void loop()
{
	int t = analogRead(0);
	float tc = (5 * t * 100.0/1024);
	lcd.setCursor(0, 1);
	lcd.print(tc);
	lcd.print(" °C");
	delay(5000);
  
}