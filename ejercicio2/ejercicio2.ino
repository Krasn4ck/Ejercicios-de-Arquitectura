int strleds[]={5,6,7,8}; //arreglo de los led´s en este caso solo ocuparemos 4 pines
int pulsador=4;          // asignamos el pin 4 para colocar el pulsador
int tiempo=200;          // asignamos un retardo de tiempo 
int n=0;                 // variable auxiliar para iterar con el arreglo
void setup() {
  // put your setup code here, to run once:
   for(n=0;n<4;n++)
  {
    pinMode(strleds[n],OUTPUT);
  }
  pinMode(pulsador,INPUT);
}
void flash()
{
  for(n=0;n<4;n++)
  {
    digitalWrite(strleds[n],HIGH);
    delay(tiempo);
    digitalWrite(strleds[n],LOW);
    delay(tiempo);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pulsador)==HIGH)
  {
    flash();
  }
}
