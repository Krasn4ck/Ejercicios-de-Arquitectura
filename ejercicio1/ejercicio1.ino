//variables globales en el arduino
int leds[]={5,6,7,8,9,10,11}; // arrgeglo en el cual contiene los pines digitales del Arduino.
int n=0;                      // auxiliar para recorrer en el arreglo
int tiempo=50;                // retardo que tendra el delay
void setup() {
  // put your setup code here, to run once:
  for(n=0;n<7;n++)            // de manera iterada se asiganara a cada elemento del arreglo como salida
  {
    pinMode(leds[n],OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(n=0;n<7;n++)
  {
    digitalWrite(leds[n],HIGH);
    delay(tiempo);
    digitalWrite(leds[n],LOW);
    delay(tiempo);
  }
  for(n=6;n>=0;n--)
  {
    digitalWrite(leds[n],HIGH);
    delay(tiempo);
    digitalWrite(leds[n],LOW);
  }
}
