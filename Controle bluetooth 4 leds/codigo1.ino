

char m=0;
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if (Serial.available()>0)  
  {
    m=Serial.read();
  
    if (m=='A')
      digitalWrite(7, HIGH);
    
    else if (m=='B')
      digitalWrite(6, HIGH);

    else if (m=='C')
      digitalWrite(5, HIGH);
    
    else if (m=='D')
      digitalWrite(4, HIGH);
      
    else if (m=='E')
      digitalWrite(7, LOW);

    else if (m=='F')
      digitalWrite(6, LOW);

    else if (m=='G')
      digitalWrite(5, LOW);

    else if (m=='H')
      digitalWrite(4, LOW);
  }
}
