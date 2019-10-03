void setup()
{
    pinMode(A0, INPUT);
    pinMode(9, OUTPUT);
}

void loop()
{
    int photores_reading = analogRead(A0);
    int mapped_value = map(photores_reading, 6, 679, 255, 0);
    analogWrite(9, mapped_value);
}