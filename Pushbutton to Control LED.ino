int state = 0;

void setup()
{
    pinMode(7, INPUT);
    pinMode(9, OUTPUT);
}

void loop()
{
    int button_value = digitalRead(7);

    if (button_value) {
      if (state) {
        digitalWrite(9, 0);
        state = 0;
        delay(1000); // To avoid debouncing problem
      } else {
        digitalWrite(9, 1);
        state = 1;
        delay(1000); // To avoid debouncing problem
      }
    }
}