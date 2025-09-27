const int ledPin = 5;      // D5 = GPIO5
const int buttonPin = 18;  // D18 = GPIO18
bool ledState = false;
bool lastButtonState = HIGH;
void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
    bool buttonState = digitalRead(buttonPin);
    if (lastButtonState == HIGH && buttonState == LOW) {
        ledState = !ledState;
        digitalWrite(ledPin, ledState);
        delay(200);
    }
    lastButtonState = buttonState;
}
