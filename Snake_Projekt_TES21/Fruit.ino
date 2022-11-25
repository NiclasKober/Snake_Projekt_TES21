

void Fruit(){

fruit.x = random(1,17);                                       // Random coordinates for the fruit
fruit.y = random(1,9);

for(int i = 0; i<size;i++){
  if((fruit.x == points[i].x)&&(fruit.y == points[i].y)){     // if fruit spawns on the snake -> try again
    Fruit();
    break;
    }
  }
}
