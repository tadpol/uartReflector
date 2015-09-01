
#define LED           9  // Moteinos have LEDs on D9

void setup() {
    pinMode(LED, OUTPUT);    
    Serial.begin(115200);
}

int c;
void loop() {
    if (Serial.available() > 0) {
        digitalWrite(LED, HIGH);

        c = Serial.read();

        if (isupper(c)) {
            c = tolower(c);
        } else {
            c = toupper(c);
        }
        Serial.write(c);
        digitalWrite(LED, LOW);
    }
}

// vim: set ft=cpp ai cin et sw=4 ts=4 :
