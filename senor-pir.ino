/**
   Criado por Paçoca Tech
   Youtube: https://www.youtube.com/channel/UCW6OP5j28zFsnKxpQ2v9CsA
   Instagram: http://instagram.com/pacocatech
   Github: http://github.com/pacocatech
   E-mail: pacocatech@gmail.com
   Efetuar a leitura do sensor de presença (PIR), serve para o modelo tradicional ou mini
*/

#define sensor 7

void setup() {
  Serial.begin(9600);

  //iniciamos o sensor como entrada de dados
  pinMode(sensor, INPUT);
  //também falamos que o estado inicial dele é não detectado
  digitalWrite(sensor, LOW);
}

void loop() {
  //começamos a leitura do sensor
  if (digitalRead(sensor)) {
    //Se a presença for detectada, fazemos alguma ação
    Serial.println("DETECTOU");
  } else {
    //caso contrario fazemos outra
    Serial.println("---------");
  }

  //delay rápido só para não misturar as leituras
  delay(741);
}
