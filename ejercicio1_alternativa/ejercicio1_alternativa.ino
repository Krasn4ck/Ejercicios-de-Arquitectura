/*
 * EJERCICIO NO.1 ALTERNATIVA A LA SOLUCION PLANTEADA
 */
int leds[]={5,6,7,8,9,10,11}; //uso del arreglo para los leds
int n=0;
int tiempo=30;
void setup() {
  // put your setup code here, to run once:
  for(n=0;n<7;n++)
  {
    pinMode(leds[n],OUTPUT);// cargamos como salida los pines
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(n=0;n<7;n++)//se mejora esteticamente el encendido de los leds 
  {
    digitalWrite(leds[n],HIGH);//prendes dos leds en cada iteracion
    delay(tiempo);
    digitalWrite(leds[n+1],HIGH);
    delay(tiempo);
    digitalWrite(leds[n],LOW);
    delay(tiempo*2);
  }
  for(n=6;n>=0;n--)
  {
    digitalWrite(leds[n],HIGH);//prendes dos leds en cada iteracion
    delay(tiempo);
    digitalWrite(leds[n-1],HIGH);
    delay(tiempo),
    digitalWrite(leds[n],LOW);
    delay(tiempo*2);
  }
}
