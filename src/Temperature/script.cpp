// C++ code
//
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	int t = analogRead(0);
	float tc = (5 * t * 100.0/1023);
	Serial.print("Temperature: ");
	Serial.print(tc);
	delay(5000);
}