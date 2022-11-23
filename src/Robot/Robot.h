/*
  Robot.cpp - Librairie pour projet Robot Sumo écrite par Thibault Tanguy.
*/

#ifndef ROBOT_H
#define ROBOT_H
#include "Arduino.h"
#include "Captors.h"
#include "Motors.h"

class Robot {
    private:
        Motors* motors;
        Captors* captors;

	public:
        // Constructeur et destructeur
		Robot();
		~Robot();

		// Actions de mouvements
		void moveRight(byte speed);
		void moveLeft(byte speed);
		void moveForward(byte speed);
		void moveBackward(byte speed);
		void stopMove();

		// Calculs infos capteurs
		bool checkBorder();
		bool checkEnnemy();
};
#endif