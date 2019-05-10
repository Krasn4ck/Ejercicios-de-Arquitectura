int leds[]={5,6,7,8};
int tiempo=200;
int pulsador=4;
int n=0;
int valuepush=0;
void setup() {
  // put your setup code here, to run once:
  for(n=0;n<4;n++)
  {
    pinMode(leds[n],OUTPUT);
  }
  pinMode(pulsador,INPUT);
  Serial.begin(9600);
}

void monitor_sal()
{
  Serial.print("El valor del pulsador es:");
  Serial.print(valuepush);
  Serial.println(" "); 
  delay(1000);
}
void secuencia()
{
  for(n=0;n<4;n++)
  {
    digitalWrite(leds[n],HIGH);
    delay(tiempo);
    digitalWrite(leds[n],LOW);
    delay(tiempo);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  valuepush=digitalRead(pulsador);
  monitor_sal();
  if(valuepush==1)
  {
    secuencia();
  }
}
