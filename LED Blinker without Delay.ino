// LED Blinker w/o Delay
int timestamp = 1000;
int state = 0;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  int simulation_time = millis();

  if (simulation_time >= timestamp) {
      timestamp += 1000;

      if (state == 0) {
          digitalWrite(13, HIGH);
          state = 1;
      } else {
          digitalWrite(13, LOW);
          state =  0;
      }
  }
}