#include "Arduino.h"
#include "Robot.h"
#include "Captors.h"
#include "Motors.h"

// Constructeur
Robot::Robot() {
	captors = new Captors();
	motors = new Motors();
}

// Destructeur
Robot::~Robot() {
    delete captors;
    delete motors;
}

// Tourne à droite
void Robot::moveRight(byte speed) {
    this->motors->rightBackward(speed);
    this->motors->leftForward(speed);
}

// Tourne à gauche
void Robot::moveLeft(byte speed) {
    this->motors->rightForward(speed);
    this->motors->leftBackward(speed);
}

// Avance tout droit
void Robot::moveForward(byte speed) {
    this->motors->rightForward(speed);
    this->motors->leftForward(speed);
}

// Recule
void Robot::moveBackward(byte speed) {
    this->motors->rightBackward(speed);
    this->motors->leftBackward(speed);
}

// Arrete de bouger
void Robot::stopMove() {
    this->motors->stopRight();
    this->motors->stopLeft();
}

// Renvoie true si le capteur détecte une ligne blanche
bool Robot::checkBorder() {
    return this->captors->getIRValue() < 1;
}

// Renvoie true si un ennemi se trouve à 50 cm ou moins du capteur
bool Robot::checkEnnemy() {
    const byte SEUIL_DISTANCE_ENNEMY = 35;
    return this->captors->getEnnemyDistance() < SEUIL_DISTANCE_ENNEMY;
}
