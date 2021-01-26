void DecodeAction(char message){
  if(message == '0'){
    SetPump(0);
  }else if(message == '1'){
    SetPump(1);
  }else if(message == '2'){
    SetPump(2);
  }else if(message == '3'){
    SetPump(3);
  }else if(message == '4'){
    SetPump(4);
  }else if(message == '5'){
    SetPump(5);
  }else if(message == '6'){
    SetPump(6);
  }
}

void SetPump(int pos){
  if(currentPump != pos){
    currentPump = pos;
    
    if(currentDistance != -1 && currentDistance != distanceList[pos]){
      int newDistance = distanceList[pos];
      if(newDistance > currentDistance){
        directionForward = 1;
      }else{
        directionForward = -1;
      }
    }else{
      directionForward = 0;
    }
    currentDistance = distanceList[pos];
  }
  Serial.print(directionForward);
}
