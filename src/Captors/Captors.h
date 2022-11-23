/*
  Capteurs.cpp - Librairie pour projet Robot Sumo écrite par Thibault Tanguy.
*/

#ifndef Captors_h
#define Captors_h
#include "Arduino.h"

class Captors {
	private :
		// PINS CAPTEUR ULTRA SON
		const byte PIN_TRIG = 2;
		const byte PIN_ECHO = 3;
		// PINS CAPTEUR INFRA ROUGE
		const byte PIN_IR_DIGITAL = 7;
		const int PIN_IR_ANALOG = A0;
		// SETUP
		void setUpCapteurUltraSon();
		void setUpCapteurInfraRouge();

	public :
		Captors();
		// Fonctions
		long getEnnemyDistance();
		int getIRValue();
};
#endif