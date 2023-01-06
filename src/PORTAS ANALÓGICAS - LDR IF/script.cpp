// C++ code
//
void setup()
{
	Serial.begin(9600);
  	pinMode(13, OUTPUT);  
}

void loop()
{
	int light;
	light = analogRead(5);
	Serial.println(light);
	delay(500);
	
  if(light> 500){
	digitalWrite(13, 1);    
  }else {
	digitalWrite(13, 0);    
  }
  
}