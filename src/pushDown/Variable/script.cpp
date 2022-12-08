
void setup()
{
  Serial.begin(9600); //Habilita a Comunicação com a PORTA ARDUINO.
  pinMode(2, INPUT); //Habilitar a porta como Entrada uso do INPUT e tipo da PORTA === 2.
}

void loop()
{
	int button; //Variavel de atribuição e tipo.
    button = digitalRead(2); //Botão recebe o valor lido da porta 2.
	Serial.println(button); //Imprimindo a variavel button.
}