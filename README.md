# PROJET ROBOT SUMO :

Librairies Arduino écrites en C++ pour Projet Robot Sumo.
Le robot se combat contre un autre robot dans une arène au sol noir et délimité par un ligne blanche.
Un capteur infrarouge permet de détecter une ligne blanche tandis qu'un capteur ultrason permet de
détecter la présence d'un autre robot.
Le robot est également équipé de deux moteurs lui permettant de charger le robot détecté par le capteur
ultrason.

## INFOS :

Installez les librairies "Robot", "Captors" et "Motors" dans le dossier des librairies d'Arduino.
Par défault : /Documents/Arduino/librairie

## LISTE DES PINS :

Branchez les moteurs et capteurs aux pins correspondants, si vous voulez modifier les variables des pins, 
il faut éditer les fichiers avec pour extension ".cpp" dans les dossiers des librairies "Captors" et "Motors".
Sinon vous pouvez consulter le dossier "SchemasPINS"

## PINS MOTEURS :

```c++
const byte PIN_LEFT_MOTOR_FORWARD = 10;
const byte PIN_LEFT_MOTOR_BACKWARD = 9;
const byte PIN_RIGHT_MOTOR_FORWARD = 12;
const byte PIN_RIGHT_MOTOR_BACKWARD = 5;
const byte PIN_RIGHT_MOTOR_SPEED = 6;
const byte PIN_LEFT_MOTOR_SPEED = 11;
```

## PINS CAPTEUR ULTRA SON :

```c++
const byte PIN_TRIG = 2;
const byte PIN_ECHO = 3;
```

## PINS CAPTEUR INFRA ROUGE :

```c++
const byte PIN_IR_DIGITAL = 7;
const int PIN_IR_ANALOG = A0;
```

## VITESSE DU ROBOT :

Speed est une variable de type byte, elle va de 0 à 255 et définit la vitesse des moteurs du robot.

```c++
const byte MIN_SPEED = 0;
const byte AVERAGE_SPEED = 100;
const byte MAX_SPEED = 255;
```

## MOUVEMENTS DU ROBOT :

```c++
void moveRight(speed) -> Le robot tourne à droite.
void moveLeft(speed) -> Le robot tourne à gauche.
void moveForward(speed) -> Le robot avance.
void moveBackward(speed) -> Le robot recule.
void stopMove() -> Le robot se stop.
```

## RECUPERER LES INFOS CAPTEURS :

```c++
bool checkBorder() -> Renvoie True si le capteur infrarouge détecte du blanc
bool checkEnnemy() -> Renvoie True si le capteur ultrason détecte une présence
```

## UTILISER L'OBJET ROBOT
Instanciez l'objet robot au debut de votre programme de cette façon :

```c++
Robot* robot = new Robot();
```
Accédez aux actions du robot en pointant vers ses méthodes :

```c++
robot->moveForward(MAX_SPEED);
```
