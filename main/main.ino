#include <string.h>
#include "COLOR.h"
#include <Servo.h>

Servo servo1;

// Todo el código que coloquen dentro de setup() se correrá una sola vez, cuando se prenda el Arduino
void setup() {
  Serial.begin(9600);
  COLOR_init();
  
  Serial.println("Hola Mundo!");

  servo1.attach(4, 500, 2500); //seteo motor, pin=2, min, max
  
}

// Todo el código que coloquen dentro de loop() se corre infinitamente mientras el Arduino esté prendido, luego de haber corrido setup()
void loop() {

  servo1.write(0); //pos de lectura
  delay(3000);
  Serial.println (COLOR_getColorName()); // Se obtiene el nombre del color que esté viendo el sensor y se imprime en el monitor (Herramientas > Monitor Serial)
  //delay(1000); // Dejar un pequeño tiempo entre cada ciclo es bueno para que el Arduino no corra como loco. Si tienen un programa un poco más inteligente, no es necesario.

  //char * color = COLOR_getColorName(); // seguarda nombre del color en variable
  //Serial.println (color); //se imprime es variable 

  if(COLOR_getColorName() == "ROJO"){ //si color es 1
    servo1.write(45); //giro 45
    //color =2; //cambio el color (porque todavia no estoy usando el sensor)
    delay(3000);
  }
  else if (COLOR_getColorName() == "AZUL"){ //si color es 2
    servo1.write(90); //giro 90
    //color =3;//cambio el color (porque todavia no estoy usando el sensor)
    delay(3000);
  }
  else if (COLOR_getColorName() == "NEGRO"){ //si color es 3
    servo1.write(135); //giro 135
    //color =4;//cambio el color (porque todavia no estoy usando el sensor)
    delay(3000);
  }
  else if (COLOR_getColorName() == "escala"){ //si color es 4
    servo1.write(180); //giro 180
    //color =1;//cambio el color (porque todavia no estoy usando el sensor)
    delay(3000);
  }
  else{ // en un futuro esto tendria q ser volver a leer color
    //servo1.write(0); 
      delay(3000);
    
  }
 


}
