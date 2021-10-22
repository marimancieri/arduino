// C++ code
//
void setup()
{
  pinMode(4, OUTPUT); //Setea Pin 4 como Salida
}

void loop() // prende y apaga led con intermitencia de 1seg
{
  digitalWrite(4, HIGH); //Pin 4 Manda voltaje max = prende led
  delay(10000); // espera 1 segundo
  
  digitalWrite(4, LOW); //Pin 4 Manda voltaje min 0 = apaga led
  delay(1000); //espera 1 segundo

}
