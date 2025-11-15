#include <Arduino.h>

// This is a placeholder for the Getting Started example.
// The code will be updated once the motor library is refactored for Arduino compatibility.

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.println("Getting Started with Motor Library!");
}

void loop() {
  // Add motor control code here.
  delay(1000);
}
