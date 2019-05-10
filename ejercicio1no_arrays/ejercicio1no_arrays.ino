/*
 * EJERCICIO NO. 1 SIN ARREGLOS
 */
 int n=0;//variable auxiliar
 int tiempo=50;//tiempo de retarod
void setup() {
  // put your setup code here, to run once:
  for(n=5;n<12;n++)
  {
    pinMode(n,OUTPUT);//declaramos la variable auxiliar como salida
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(n=5;n<12;n++)// asignamos los el encedido y apagado de los led´s de la misma manera que la anterior
  {
    digitalWrite(n,HIGH);
    delay(tiempo);
    digitalWrite(n,LOW);
  }
  for(n=11;n>=5;n--)// asignamos los el encediod y apagado de los led´s de la misma manera que la anterior
  {
    digitalWrite(n,HIGH);
    delay(tiempo);
    digitalWrite(n,LOW);
  }
}
