#include <Arduino.h>

uint8_t value = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Setup complete");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Test");
  digitalWrite(LED_BUILTIN, value);
  if (value == LOW) {
    value = HIGH;
  } else {
    value = LOW;
  }
  delay(1000);
}