
#include <Servo.h>

Servo servo1;
int color = 1; //colores 1,2,3y4 (ahora son numeros despues voy a usar la lectura del sensor)

void setup()
{
  servo1.attach(4, 500, 2500); //seteo motor, pin=2, min, max

}

void loop()
{
  servo1.write(0); //pos de lectura
  delay(3000);
  
  if(color == 1){ //si color es 1
    servo1.write(45); //giro 45
    color =2; //cambio el color (porque todavia no estoy usando el sensor)
    delay(3000);
  }
  else if (color == 2){ //si color es 2
    servo1.write(90); //giro 90
    color =3;//cambio el color (porque todavia no estoy usando el sensor)
  delay(3000);
  }
  else if (color == 3){ //si color es 3
    servo1.write(135); //giro 135
    color =4;//cambio el color (porque todavia no estoy usando el sensor)
  delay(3000);
  }
  else if (color == 4){ //si color es 4
    servo1.write(180); //giro 180
    color =1;//cambio el color (porque todavia no estoy usando el sensor)
  delay(3000);
  }
  else{ // en un futuro esto tendria q ser volver a leer color
    servo1.write(0); 
    delay(3000);
    
  }
  
  /*servo1.write(0);
  delay(3000);
  servo1.write(45);
  delay(3000);
  //servo1.write(0);
  //delay(3000);
  servo1.write(90);
  delay(3000);
  servo1.write(135);
  delay(3000);
  servo1.write(180);
  delay(3000);*/
  
}
