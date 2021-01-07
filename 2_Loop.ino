void loop() {
  buttonOne.tick();
  
  if(mySerial.available()){
    char msg[2];
    msg[0] = mySerial.read();
    msg[1] = mySerial.read();
  }
}
