char m=0;

void setup() {
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
Serial.begin(9600);
}

void loop() {
 if (Serial.available()>0)
 {
  m=Serial.read();
  }
 if (m=='F')
{
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  }
 else if (m=='B')
{
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  }
else
{
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }
}
