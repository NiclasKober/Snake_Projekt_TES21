

void fail(){
  for(int i = 1; i<size;i++){
    if((points[0].x==points[i].x)&&(points[0].y == points[i].y)){   // if the head of the snake hits another part of it -> restart
      Init();
    }
  }
}
