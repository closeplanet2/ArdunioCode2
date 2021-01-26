#include <SoftwareSerial.h>
#include <OneButton.h>

SoftwareSerial mySerial(11, 12);
OneButton buttonOne(53, true); 

int distanceList[] = {100,80,60,40,20,0,0};
int currentPump = 0;
int currentDistance = -1;
int directionForward = 0;
