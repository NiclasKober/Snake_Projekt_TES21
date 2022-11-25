

// Logic for passing through walls
// if your coordinate is too high or low you end up on the other side so 
// 0 turns into 16 and 17 turns into 1 for x
// 0 turns into 8 and 9 turns into 1 for y


void Positioning(){                   
  for(int i = 0; i<size;i++){         
                                      
    if(points[i].x>16){               
      points[i].x = points[i].x-16;
    }
    if(points[i].x<1){
      points[i].x = points[i].x+16;
    }
    if(points[i].y>8){
      points[i].y = points[i].y-8;
    }
    if(points[i].y<1){
      points[i].y = points[i].y+8;
    } 
  } 
}
