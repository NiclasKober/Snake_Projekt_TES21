
void move() {
  int time = millis();
if((time-movecount)>=Speed){   // move only triggers every (speed) milliseconds
  movecount=millis();
  hitMutex = 1;                // hit may activate again
  turnMutex = 1;               // direction may change again
  
switch(direction){             // every element of the snake gets the coordinates of the next one 
                               // and the first one changes according to the movement direction


case RECHTS:                      
  for(int  i = size-1; i>0; i--){
     points[i] = points[i-1];
    }
  points[0].x=points[0].x+1;
  Positioning();
  break;


case LINKS:
  for(int  i = size-1; i>0; i--){
  points[i] = points[i-1];
  }
  points[0].x--;
  Positioning();
  break;

case OBEN: 
  for(int  i = size-1; i>0; i--){
  points[i] = points[i-1];
  }
  points[0].y++;
  Positioning();
  break;

case UNTEN:
  for(int  i = size-1; i>0; i--){
  points[i] = points[i-1];
  }
  points[0].y--;
  Positioning();
  break;

  
    }
  }
}
