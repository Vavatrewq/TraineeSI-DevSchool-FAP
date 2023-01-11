// C++ code
//
void setup()
{

  
}

void loop()
{
	int light;
  	light = analogRead(5);
	int x;
	x = map(light, 0, 1023, 0, 255);
	analogWrite(3, x);
	delay(500);
  
}