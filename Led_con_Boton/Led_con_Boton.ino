// C++ code
//

int estado = 0;
int estadoAnterior = 0;
int encendido = 0;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
  Serial.println ("empezó");
}

void loop()
{
  estado = digitalRead(8);
  Serial.println (estado);
  if ((estado == HIGH) && (estadoAnterior == LOW)){
    encendido = 1-encendido;
    delay(20);
  }

  estadoAnterior = estado;
  
  if (encendido == 1) {
   digitalWrite(4, HIGH);
   delay(100);
  }
  else{
    digitalWrite(4, LOW);
    delay(100);
  }
  
}
