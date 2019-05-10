/*
 * EJERCICIO NO. 3
 * BUZZER CON ALGUNOS LEDS
 */
int leds[]={5,6,7,8,9}; //pines y variables que ocuparemos
int n=0;
int tiempo=200;
int buzzer=10;
int pulsador=11;
void setup() {
  // put your setup code here, to run once:
  for(n=0;n<5;n++)// declaramos que el arreglo seran salidas
  {
    pinMode(leds[n],OUTPUT);
  }
  pinMode(buzzer,OUTPUT);// buzzer como una salida
  pinMode(pulsador,INPUT);//pulsador como entrada
}
void comprobacion()
{//comprobamos si el pulsador esta en ela alto y si el elemento en el arreglo es el 2 
  if(digitalRead(pulsador)==HIGH&&n==2)
  {
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(buzzer,LOW);
    //restamos tiempo
    tiempo=tiempo-20;
    //reasignamos el valor original del tiempo
    if(tiempo<10)
    {
      tiempo=200;
    }
  }
}
void loop() {
  // put your main code here, to run repeatedly:
 for(n=0;n<5;n++)
 {//encendemos y apagamos los leds
  digitalWrite(leds[n],HIGH);
  delay(tiempo);
  //llamamos la funcion
  comprobacion();
  digitalWrite(leds[n],LOW);
  delay(tiempo); 
 }
}
