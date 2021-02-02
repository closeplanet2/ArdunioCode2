void DecodeAction(char message){
  if(message == '0'){
    //GO Home
  }else if(message == '1'){
    SetPump(1, servoOne);
  }else if(message == '2'){
    SetPump(2, servoTwo);
  }else if(message == '3'){
    SetPump(3, servoThree);
  }else if(message == '4'){
    SetPump(4, servoFour);
  }else if(message == '5'){
    SetPump(5, servoFive);
  }else if(message == '6'){
    SetPump(6,servoSix);
  }
}

void SetPump(int pos, servo){
  if(lastPump != pos){
    newDistance = distanceList[pos]
    currentPump = pos
    if(newDistance < currentDistance){
      directionForward = 1
    }else{
      directionForward = 0
    }
    currentDistance = newDistance
  }
}
