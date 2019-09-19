

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
  
    switch (m)
    { 
    case 'A':
      digitalWrite(7, HIGH);
      break;
    
    case 'B':
      digitalWrite(6, HIGH);
      break;

    case 'C':
      digitalWrite(5, HIGH);
      break;
    
    case 'D':
      digitalWrite(4, HIGH);
      break;
      
    case 'E':
      digitalWrite(7, LOW);
      break;

    case 'F':
      digitalWrite(6, LOW);
      break;

    case 'G':
      digitalWrite(5, LOW);
      break;

    case 'H':
      digitalWrite(4, LOW);
      break;
    }
  }
}
