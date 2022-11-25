
#define RECHTS 0
#define UNTEN  1
#define LINKS  2
#define OBEN   3

typedef struct {      // struct with x and y coordinate for one element of the LED matrix
  int x;
  int y;
} point;

point points[128];  // the Snake is an array of LED points
point fruit;
int direction;
int size;
int movecount;
int hitMutex;
int turnMutex;
int Speed = 450;
void Init();
void Buttons();
void ButtonR();

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);                 // Button pin Left
  pinMode(3, INPUT);                 // Button pin Right
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  // connects the interrupt pins with the interrupt handler
  attachInterrupt(digitalPinToInterrupt(3), my_interrupt_handlerR, RISING);     
  attachInterrupt(digitalPinToInterrupt(2), my_interrupt_handlerL, RISING);

    for(int i = 0; i<17;i++){        // Pin Setup as output for all pins
    pinMode(52-(2*i), OUTPUT);          
    pinMode(51-(2*i), OUTPUT);
  }
  for(int i = 0;i<8;i++){
    digitalWrite(51-(2*i), 0);       // All LEDs off
  }
  for(int i = 0;i<16;i++){
    if(i>=3){
      digitalWrite(52-(2*i)-2, 1);  // All LEDs off but they are negated so off means "1", 
                                    // because of the pin setup, the pins from 3 up have to be one position further
    } else {
    digitalWrite(52-(2*i), 1);
    }
  }
  randomSeed(analogRead(0));        // Random spot in the equal sequence of random numbers for the fruit
Init();                              
movecount=millis();                 //starttime for movement delay
}

void loop() {
 LED();                         
  move();
 if(hitMutex){
  Hit();
 }
 fail();
 speed();
}
