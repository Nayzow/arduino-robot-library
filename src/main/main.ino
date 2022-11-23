#include <Arduino.h>
#include <Robot.h>

Robot *robot = new Robot();

// Les vitesses
const byte MIN_SPEED = 0;
const byte AVERAGE_SPEED = 100;
const byte MAX_SPEED = 255;

// Etats du robot    
enum State {
    SEARCHING = 0,
    ENNEMY_SPOTTED = 1,
} state;

// Fonction setup
void setup() {
    Serial.begin(9600);
    state = SEARCHING;
}

// Fonction Main
void loop() {
    // On verifie l'état du robot à chaque tour de boucle
    switch (state) {
        // Etat de recherche
        case SEARCHING:
            if (robot->checkEnnemy()) { state = ENNEMY_SPOTTED; }
            else { robot->moveRight(AVERAGE_SPEED); }
            break;

        // Etat d'attaque
        case ENNEMY_SPOTTED:
            // Si le robot voit une ligne blanche ou si il ne voit pas d'ennemi il retourne en état de recherche
            if (robot->checkBorder() || !robot->checkEnnemy()) { state = SEARCHING; }
            else { robot->moveForward(MAX_SPEED); }
            break;
    }
}
