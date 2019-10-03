int pinNumber = 4;

void setup () {
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    
}

void loop () {
    int value = 3;
    int led_array[4] = {0, 0, 0, 0};
    int array_index = 0;

    while (value > 0)
    {
        int r = value%2;
        led_array[array_index++] = r;
        value /= 2;
    }

    for (int i = 0; i < 4; i++)
    {
        digitalWrite(pinNumber--, led_array[i]);
    } 
}