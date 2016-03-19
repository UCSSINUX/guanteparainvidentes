# Comunidad de software libre UCSSINUX
#
#
#
#include <Ultrasonic.h>
int pinMotor = 5;
int distancia = 0;
Ultrasonic ultrasonic(9,8); // (Trig PIN,Echo PIN)

void setup() {
  Serial.begin(9600);
  pinMode(pinMotor, OUTPUT);
}

void loop()
{
  distancia = ultrasonic.Ranging(CM);
  Serial.print(distancia); // CM or INC
  if (distancia <= 50)
  {
    digitalWrite(pinMotor,HIGH);
   
  }
  else
  {
    digitalWrite(pinMotor, LOW);
  }
}
