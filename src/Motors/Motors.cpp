#include "Motors.h"
#include "Arduino.h"

Motors::Motors() {
    void setUpMotors();
}

// Setup les moteurs
void Motors::setUpMotors() {
    pinMode(PIN_LEFT_MOTOR_FORWARD, OUTPUT);
	pinMode(PIN_LEFT_MOTOR_BACKWARD, OUTPUT);
	pinMode(PIN_RIGHT_MOTOR_FORWARD, OUTPUT);
	pinMode(PIN_RIGHT_MOTOR_BACKWARD, OUTPUT);
	pinMode(PIN_RIGHT_MOTOR_SPEED, OUTPUT);
	pinMode(PIN_LEFT_MOTOR_SPEED, OUTPUT);
}

void Motors::rightForward(byte speed) {
    digitalWrite(PIN_RIGHT_MOTOR_BACKWARD, LOW);
    digitalWrite(PIN_RIGHT_MOTOR_FORWARD, HIGH);
	analogWrite(PIN_RIGHT_MOTOR_SPEED, speed);
}

void Motors::leftForward(byte speed) {
    digitalWrite(PIN_LEFT_MOTOR_BACKWARD, LOW);
    digitalWrite(PIN_LEFT_MOTOR_FORWARD, HIGH);
    analogWrite(PIN_LEFT_MOTOR_SPEED, speed);
}

void Motors::rightBackward(byte speed) {
    digitalWrite(PIN_RIGHT_MOTOR_FORWARD, LOW);
    digitalWrite(PIN_RIGHT_MOTOR_BACKWARD, HIGH);
    analogWrite(PIN_RIGHT_MOTOR_SPEED, speed);
}

void Motors::leftBackward(byte speed) {
    digitalWrite(PIN_LEFT_MOTOR_FORWARD, LOW);
    digitalWrite(PIN_LEFT_MOTOR_BACKWARD, HIGH);
    analogWrite(PIN_LEFT_MOTOR_SPEED, speed);
}

void Motors::stopRight() {
    digitalWrite(PIN_RIGHT_MOTOR_BACKWARD, LOW);
    analogWrite(PIN_RIGHT_MOTOR_SPEED, 0);
}

void Motors::stopLeft() {
    digitalWrite(PIN_LEFT_MOTOR_BACKWARD, LOW);
    analogWrite(PIN_LEFT_MOTOR_SPEED, 0);
}