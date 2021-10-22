
#include <Servo.h>

Servo servo1;
int VALORPOT;
int ANGULO;
int POT =0;


void setup()
{
  servo1.attach(4, 500, 2500); //seteo motor, pin=2, min, max

}

void loop()
{
  VALORPOT = analogRead(POT);
  ANGULO = map (VALORPOT, 0,1023,0,180);
  servo1.write(ANGULO);
  delay(20);

}
