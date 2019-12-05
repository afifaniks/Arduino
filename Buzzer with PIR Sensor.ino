void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, INPUT);
}

void loop()
{
  int a = digitalRead(10);
  
  if (a) {
    tone(11, 255, 1000); // tone(pin, frequency, duration)
    delay(500);
    tone(11, 100, 0);
    delay(250);
    tone(11, 200, 0);
    delay(250);
    noTone(11);
  }
}