void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  
  pinMode(13, OUTPUT);
  servoOne.attach(30);
  servoTwo.attach(31);
  servoThree.attach(32);
  servoFour.attach(33);
  servoFive.attach(34);
  servoSix.attach(35);
  servoSeven.attach(36);
  servoEight.attach(37);
  servoNine.attach(38);

  buttonOne.attachClick(Button1);
}
