// C++ code
//
void setup()
{
}

void loop()
{
	
  for(int x = 0; x <= 255; x++){
  	analogWrite(11, x);
    delay(500);
    
  };
  
  for(int x = 0; x <= 255; x++){
  	analogWrite(10, x);
    delay(500);
    
  };
  
  for(int x = 0; x <= 255; x++){
  	analogWrite(9, x);
    delay(500);
    
  };
  
}