#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Jaya
 * @date 2026-01-25
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

int touchpin = 2; // TTP223 touch sensor connected to digital pin 2

int state = 0;
void setup() {
    pinMode(touchpin, INPUT);
    Serial.begin(9600);
}

void loop() {
    state = digitalRead(touchpin);
    if (state == 1) {
        Serial.println("Touch Detected: HIGH");
    } else {
        Serial.println("No Touch: LOW");
    }
    delay(500); // Delay for stability and readability
}
