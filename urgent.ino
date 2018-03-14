void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    delay(100);
  }
  for (int j = 0; j < 5; j++) {
    digitalWrite(5, HIGH);
    delay(50);
    digitalWrite(5, LOW);
    delay(50);
  }
}
