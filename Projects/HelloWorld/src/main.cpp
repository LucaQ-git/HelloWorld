#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  Serial.println("\n\n");
  Serial.println("Luca Quacquarelli, 000838997");
  Serial.println("ESP8266 Chip ID " + String(ESP.getChipId()));
  Serial.println("Flash Chip Id " + String(ESP.getFlashChipId()));


  Serial.println("*************");
  Serial.println("Hello World!!");
  Serial.println("*************");
}

void loop() {

  delay(2000);
  Serial.println("Time since startup: " + String(millis()));
}