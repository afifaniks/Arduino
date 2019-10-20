#include <Servo.h>

Servo motor;
int TRIGGER_PIN = 5;
int ECHO_PIN = 4;
int MOTOR_PIN = 3;
int LED_RED = 10;
int LED_GREEN = 11;
int PUSH_BTN = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  motor.attach(MOTOR_PIN);
}

int state = 0;

void loop()
{
  digitalWrite(TRIGGER_PIN, 0);
  delay(10);
  digitalWrite(TRIGGER_PIN, 1);
  delay(10);
  digitalWrite(TRIGGER_PIN, 0);
  
  int reading = pulseIn(ECHO_PIN, 1)/29/5;
  
  if (reading <= 10) {
    digitalWrite(LED_GREEN, 1);
    digitalWrite(LED_RED, 0);
    state = 1;
  } else {
    digitalWrite(LED_GREEN, 0);
    digitalWrite(LED_RED, 1);
    state = 0;
  }
  
  if (digitalRead(PUSH_BTN) && state) {
    motor.write(90);
  } else {
    motor.write(0);
  }
  
}