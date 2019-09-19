/*==========================================================================
                 Baú da Eletrônica Componentes Eletrônicos
                        www.baudaeletronica.com.br
                     Sistema de irrigação com Arduino
==========================================================================*/

int valvula = 8; // sinal do rele para válvula

void setup() {
  pinMode(valvula, OUTPUT); // declara válvula como saída
}

void loop() {

 // Leitura do sensor no pino A0 e armazenamento em SensorValue

 int sensorValue = analogRead(A0);

 // verifica se valor de leitura está acima de 600 (umido abaixo de 600  e seco até 1023)

 if (sensorValue > 600){
   // se sim, libera água por 3s
   digitalWrite(valvula,LOW);
   delay(3000);
   digitalWrite(valvula,HIGH); // desliga válvula
 }

 else{
 // se não, interrompe a passagem de água
   digitalWrite(valvula,HIGH);
   delay(1000);
  }
  delay(3000); // Aguarda 3s para verificar se solo está umido novamente
}
