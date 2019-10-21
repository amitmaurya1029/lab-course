float i;
void setup()
{pinMode(10,OUTPUT);
pinMode(6,INPUT);
}

void loop()
{
  i=analogRead(6);
 if(i<3)
 {digitalWrite(10,HIGH);  
  delay(500);
  digitalWrite(10,LOW);
  delay(500);}
   else if(i>500)
 {digitalWrite(10,HIGH);  
  delay(100);
  digitalWrite(10,LOW);
  delay(100);
 }
}
