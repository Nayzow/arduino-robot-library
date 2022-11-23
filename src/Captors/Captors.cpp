#include "Captors.h"
#include "Arduino.h"

// Constructeur
Captors::Captors() {
  void setUpCapteurUltraSon();
  void setUpCapteurInfraRouge();
}

// Setup les capteurs
void Captors::setUpCapteurUltraSon() {
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  digitalWrite(PIN_TRIG, LOW);
}

void Captors::setUpCapteurInfraRouge() {
  pinMode(PIN_IR_DIGITAL, INPUT);
  pinMode(PIN_IR_ANALOG, INPUT);
}

// La fonction retourne la distance d'un obstacle en cm
long int Captors::getEnnemyDistance() {
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);
  long echoValue = pulseIn(PIN_ECHO, HIGH);
  return echoValue / 58;
}

// La fonction retourne la valeur de l'intensité lumineuse
int Captors::getIRValue() {
	int digitalValue = digitalRead(PIN_IR_DIGITAL);
	return digitalValue;
}