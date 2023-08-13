const int LED=13;

void setup()
{
  pinMode (LED,OUTPUT);	//used throughout

}

void loop()
{
  digitalWrite(LED,HIGH);
  delay(500);				// in milli-second
  digitalWrite(LED,LOW);
  delay(500);

  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  delay(500);
}