int xx;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  xx = analogRead(A0);
  Serial.println(xx);
}