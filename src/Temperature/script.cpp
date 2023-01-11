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
<<<<<<< HEAD
	Serial.println(" Graus Celsius.");
=======
>>>>>>> 5131dac72ff78df8876a44456028783bc9fd803d
	delay(5000);
}