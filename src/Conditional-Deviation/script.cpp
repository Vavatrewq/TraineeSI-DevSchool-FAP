void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  int button;
  
  button = digitalRead(2);
  Serial.println(button);
    
  if(button == 1){
  digitalWrite(3, 1);		
    
  }else{
  digitalWrite(3, 0);
    
  }  
  
  delay(500);
}