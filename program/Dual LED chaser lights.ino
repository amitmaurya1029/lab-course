void setup()
{
  for(int i=10;i<14;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  delay(1000);
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
  delay(1000);  
}