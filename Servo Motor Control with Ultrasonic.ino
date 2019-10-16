#include <Servo.h>

Servo motor;

void setup()
{
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  motor.attach(3);
}

void loop()
{
  digitalWrite(5, 0);
  delay(100);
  digitalWrite(5, 1);
  delay(100);
  digitalWrite(5, 0);
  
  int reading = pulseIn(4, 1)/29/5; //Centimeters
  
  if (reading < 20)
    motor.write(90);
  else motor.write(0);
}