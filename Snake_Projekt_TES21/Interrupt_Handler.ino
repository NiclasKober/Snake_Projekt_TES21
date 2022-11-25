
void my_interrupt_handlerR()                    // Interrupt for Button Right
{
  static unsigned long last_interrupt_time = 0; 
  unsigned long interrupt_time = millis();      // get current time in ticks from program start
  // If interrupts come faster than 200ms, assume it's a bounce and ignore, and a button can only trigger once per move
  if (turnMutex && (interrupt_time-last_interrupt_time>200)) 
  {
    turnMutex=0;                                 // locks movement for the current move
    ButtonR();                                  
  }
  last_interrupt_time = interrupt_time;         // next trigger is 200 ms from now so last time is current time
}


void my_interrupt_handlerL()                    // Interrupt for Button Left
{
  static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
 // If interrupts come faster than 200ms, assume it's a bounce and ignore and a button can only trigger once per move
  if (turnMutex && (interrupt_time-last_interrupt_time>200)) 
  {
    turnMutex=0;                                 // locks movement for the current move
    ButtonL();
  }
  last_interrupt_time = interrupt_time;         // next trigger is 200 ms from now so last time is current time
}
