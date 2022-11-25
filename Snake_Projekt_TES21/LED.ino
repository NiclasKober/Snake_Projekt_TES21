

void LED(){                                 // Activates and Deactivates the LED every clock tick
                                            // necessary for overcoming unwanted LED to be on
  for(int i = 0;i<size;i++){
    if(points[i].x >=4){                    // Pins 46 - 22 are all one pin further because 46 was skipped -> 44-20, so if x >=4 -> pin = pin - 2 
                                            // they are in order, so you can call them by Startpin minus the coordinate they change *2 .
                                            // because the pins are descending by 2 per coordinate. 
                                            // --> x coordinate can be 1 - 16, y coordinate can be 1 - 8
    digitalWrite(54-(points[i].x*2)-2,0);   // to solve the problem of overlapping rows and colums  
    digitalWrite(53-points[i].y*2,1);       // the single LEDs are switched on and immediately off again
        
    digitalWrite(54-(points[i].x*2)-2,1);
    digitalWrite(53-points[i].y*2,0);

}else {
    
    digitalWrite(54-points[i].x*2,0);
    digitalWrite(53-points[i].y*2,1);
        
    digitalWrite(54-points[i].x*2,1);
    digitalWrite(53-points[i].y*2,0);
}

if(fruit.x>=4){
    digitalWrite(54-(fruit.x*2)-2,0);
    digitalWrite(53-fruit.y*2,1);
    
    digitalWrite(54-(fruit.x*2)-2,1);
    digitalWrite(53-fruit.y*2,0);
} else {

    digitalWrite(54-fruit.x*2,0);
    digitalWrite(53-fruit.y*2,1);
    
    digitalWrite(54-fruit.x*2,1);
    digitalWrite(53-fruit.y*2,0);
   
    }
  }
}
