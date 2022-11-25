
void ButtonR(){             // Interrupt buttons call these functions to change the direction
  direction++;
  if(direction >3){         // directions  are defined as Right = 0, Down = 1, Left = 2 and Up = 3,
    direction = 0;
  }
}

void ButtonL(){
  direction--;
  if(direction <0){
    direction = 3;
  }
}
