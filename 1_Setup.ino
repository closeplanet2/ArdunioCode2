void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(13, OUTPUT);

  buttonOne.attachClick(Button1);
}
