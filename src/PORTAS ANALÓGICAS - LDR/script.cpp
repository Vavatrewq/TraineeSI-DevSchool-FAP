// C++ code
//
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	int light;
	light = analogRead(5);
	Serial.println(light);
	delay(500);
  
  
}