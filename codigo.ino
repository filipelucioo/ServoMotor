//Importando a biblioteca do servo.h
#include <Servo.h>

//instanciando um objeto chamado Servo
Servo servo;

//Crio uma função que inicializa os pinos e componentes
void setup (){
  Serial.begin(9600);
  servo.attach(3); //Pino onde ligamos o sinal do Servomotor
}
//Criar uma função que se repete infinitamente

  
void loop (){
  for(int posicao = 0; posicao <=180 ; posicao ++){
    servo.write(posicao);    
    Serial.println(posicao);
    delay(500);
  }
//fazer o contrario
  for(int posicao = 180; posicao <=0 ; posicao --){
    servo.write(posicao);    
    Serial.println(posicao);
    delay(500);
  }
}
