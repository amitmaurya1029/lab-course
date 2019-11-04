void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  int read= digitalRead(2);
  if(read==HIGH){
    digitalWrite(13,LOW);
  }
  else{
    digitalWrite(13,HIGH);
  }
}