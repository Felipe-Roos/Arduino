#define pinSensorA A0
#define pinSensorD 12
#define rele 3

void setup(){
  pinMode(rele, OUTPUT);
  pinMode(pinSensorD, INPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.print("Digital");
  
  if(digitalRead(pinSensorD)){
  	Serial.print("Sem umidade");
  }else{
  	Serial.print("Com umidade");
  }
  Serial.print(" Analogico:");
  Serial.print(analogRead(pinSensorA));
  Serial.print("  ");
  
  Serial.print("  Atuador");
  if (analogRead(pinSensorA > 700)){
  	Serial.print("Solenoide ligado");
    digitalWrite(rele, HIGH);
  }else{
  	Serial.print("Solenoide desligado");
    digitalWrite(rele, LOW);
  }
  
}