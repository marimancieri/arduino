#define RED 3
#define GREEN 7
#define BUTTON 9

void setup()
{
pinMode(RED,OUTPUT);
pinMode(GREEN,OUTPUT);
pinMode(BUTTON,INPUT_PULLUP);
}
void loop()
{
if(digitalRead(BUTTON)==LOW)
{
  digitalWrite(GREEN,LOW);
  digitalWrite(RED,HIGH);
}
else
{
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,HIGH);
}
}
