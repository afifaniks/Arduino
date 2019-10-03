void setup()
{
    pinMode(A0, INPUT);
    pinMode(11, OUTPUT);
}

void loop()
{
    int potentiometer_read = analogRead(A0);
    int mapped_value = map(potentiometer_read, 0, 1023, 0, 255);

    analogWrite(11, mapped_value);
}