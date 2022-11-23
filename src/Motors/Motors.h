/*
  Capteurs.cpp - Librairie pour projet Robot Sumo écrite par Thibault Tanguy.
*/

#ifndef Motors_h
#define Motors_h
#include "Arduino.h"

class Motors {
    private:
        void setUpMotors();
        const byte PIN_LEFT_MOTOR_FORWARD = 10;
        const byte PIN_LEFT_MOTOR_BACKWARD = 9;
        const byte PIN_RIGHT_MOTOR_FORWARD = 12;
        const byte PIN_RIGHT_MOTOR_BACKWARD = 5;
        const byte PIN_RIGHT_MOTOR_SPEED = 6;
        const byte PIN_LEFT_MOTOR_SPEED = 11;

    public:
        Motors();
        // Fonctions
        void rightForward(byte speed);
        void leftForward(byte speed);
        void rightBackward(byte speed);
        void leftBackward(byte speed);
        void stopRight();
        void stopLeft();
};
#endif