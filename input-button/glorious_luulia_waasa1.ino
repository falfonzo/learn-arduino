int buttonPin=7;
int ledPin=13;
int status=0;

void setup()
{
	pinMode(ledPin,OUTPUT);
	pinMode(buttonPin,INPUT);
}

void loop()
{
    status=digitalRead(buttonPin);
    digitalWrite(ledPin,status);
}



