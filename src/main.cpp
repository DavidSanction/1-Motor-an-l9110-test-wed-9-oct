#include <Arduino.h>

// Define motor control pins for H-bridge
const int motorPin1 = 16; // Motor control pin 1
const int motorPin2 = 17; // Motor control pin 2

// Define PWM channel
const int motorChannel = 0;

// Define PWM properties
const int pwmFreq = 5000; // 5 kHz
const int pwmResolution = 8; // 8-bit resolution

void setup() {
    Serial.begin(115200);

    // Initialize motor control pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);

    // Initialize motor PWM pin and attach to PWM channel
    ledcAttachPin(motorPin1, motorChannel);

    // Configure PWM channel
    ledcSetup(motorChannel, pwmFreq, pwmResolution);
}

void loop() {
    // Turn motor in one direction
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    ledcWrite(motorChannel, 255); // Full speed
    delay(5000); // Run for 5 seconds

    // Turn motor in the opposite direction
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    ledcWrite(motorChannel, 255); // Full speed
    delay(5000); // Run for 5 seconds
}