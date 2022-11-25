
void Init(){                    // restart the game
 
size=3;                         // limits the array so we only check the elements that the snake actually has
for(int i = 0;i<128;i++){       // snake elements initialized outside of the LED matrix
  points[i].x = 100;
  points[i].y = 100;
  }
  for (int i = 0;i<size;i++){   // start position for the snake in the middle of the field
    points[i].x= 8-i;
    points[i].y= 4;
  }
  Fruit();                      
  direction=RECHTS;
}
