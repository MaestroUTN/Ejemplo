#include <Arduino.h>

// El LED flash del ESP32-CAM (AI-Thinker) suele estar en el pin 4
// El LED interno rojo de estado suele estar en el pin 33 (invertido)
#define LED_FLASH 4

void setup() {
  pinMode(LED_FLASH, OUTPUT);
}

void loop() {
  digitalWrite(LED_FLASH, HIGH); // Enciende el flash
  delay(1000);                   // Espera 1 segundo
  digitalWrite(LED_FLASH, LOW);  // Apaga el flash
  delay(1000);                   // Espera 1 segundo
}