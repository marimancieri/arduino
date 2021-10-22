#define RED 3
#define YELLOW 5
#define GREEN 7

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  digitalWrite(RED,LOW);
  pinMode(YELLOW, OUTPUT);
  digitalWrite(YELLOW,LOW);
  pinMode(GREEN, OUTPUT);
  digitalWrite(GREEN,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED,HIGH);
  delay(1000);
  digitalWrite(RED,LOW);
  
  digitalWrite(YELLOW,HIGH);
  delay(1000);
  digitalWrite(YELLOW,LOW);
  
  digitalWrite(GREEN,HIGH);
  delay(1000);
  digitalWrite(GREEN,LOW);
  

  
}
