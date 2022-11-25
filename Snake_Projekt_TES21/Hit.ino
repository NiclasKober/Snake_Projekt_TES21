

void Hit(){
  if((points[0].x == fruit.x)&&(points[0].y == fruit.y)){       // head of the snake hits the fruit
    size++;
    hitMutex=0;                                                 // hit should not be called more than once between moves
    
    switch(direction){                                          // spawn the new snake element depending on the move direction
      case RECHTS:                                              // direction right --> spawn the new snake element left etc.
        points[size-1].y = points[size-2].y;
        points[size-1].x=points[size-2].x-1;
        break;

        
      case LINKS:
        points[size-1].y = points[size-2].y;
        points[size-1].x=points[size-2].x+1;
        break;

      
      case OBEN:
        points[size-1].x = points[size-2].x;
        points[size-1].y=points[size-2].y-1;
        break;

        
      case UNTEN:
        points[size-1].x = points[size-2].x;
        points[size-1].y=points[size-2].y+1;
        break;

          
    }
    
    Fruit();       // Fruit is hit, so we need a new one    
                  
  } 
  
}
