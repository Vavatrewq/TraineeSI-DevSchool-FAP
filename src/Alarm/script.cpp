// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
	int t = analogRead(0);
  	float tc = (5 * t * 100.0/1024);
  	Serial.print("Temperature: ");
	Serial.print(tc);
	Serial.println(" Graus Celsius.");
	
	delay(1000);
  
  	if(tc > 50)return digitalWrite(13, HIGH);
	digitalWrite(13, LOW); 
}