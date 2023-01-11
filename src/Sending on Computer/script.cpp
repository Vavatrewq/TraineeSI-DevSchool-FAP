// C++ code
//
void setup()
{
	Serial.begin(9600);
  	pinMode(13, OUTPUT);
  	pinMode(12, OUTPUT);
  	pinMode(11, OUTPUT);
}

void loop()
{
  int check = Serial.available();
  if(check > 0){
  	char valid = Serial.read();
    
	if(valid == '1')digitalWrite(13, HIGH);
    if(valid == '2')digitalWrite(12, HIGH);
    if(valid == '3')digitalWrite(11, HIGH);
    //
    if(valid == 'A')digitalWrite(13, LOW);
    if(valid == 'B')digitalWrite(12, LOW);
    if(valid == 'C')digitalWrite(11, LOW);
  }	
  
  delay(500);
  
}