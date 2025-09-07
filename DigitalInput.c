int buttonPin = 2;
void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  int state = digitalRead(buttonPin);
  Serial.println(state);
  delay(200);
}
