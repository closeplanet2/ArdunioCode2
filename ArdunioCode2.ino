#include <Servo.h>
#include <SoftwareSerial.h>
#include <OneButton.h>

SoftwareSerial mySerial(11, 12);
OneButton buttonOne(53, true); 

Servo servoOne;
Servo servoTwo;
Servo servoThree;
Servo servoFour;
Servo servoFive;
Servo servoSix;
Servo servoSeven;
Servo servoEight;
Servo servoNine;

int distanceList[] = {100,80,60,40,20,0,0};
int currentPump = 0;
int currentDistance = -1;
int directionForward = 0;
