#include <Servo.h>

Servo motor;

void setup()
{
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  motor.attach(3);
}

void loop()
{
  // Temperature Control
  double temp = analogRead(A1)*0.004882814;
  temp = (temp - 0.5)*100.0;
  analogWrite(6, map(temp, 0, 100, 0, 255));	
  
  // Light Control
  int LDR = analogRead(A0);
  analogWrite(11, map(LDR, 6, 679, 255, 0));
  
  // Door Control
  digitalWrite(5, 0);
  delay(10);
  digitalWrite(5, 1);
  delay(10);
  digitalWrite(5, 0);
  
  int dist = pulseIn(4, 1)/29/5;
  
  if (dist < 30) motor.write(90);
  else motor.write(0);
}