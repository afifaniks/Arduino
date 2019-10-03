// Press 'o' to turn on, 'f' to turn off

void setup()
{
    Serial.begin(9600);
    pinMode(12, OUTPUT);
}

void loop()
{
    if (Serial.available()) {
        char ch = Serial.read();
        Serial.println(ch);

        if (ch == 'o') {
            digitalWrite(12, 1);
        } else if (ch == 'f') {
            digitalWrite(12, 0);
        }
        
    }  
}