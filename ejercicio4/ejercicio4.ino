/*
 * EJERCICIO NO. 5 TERMOSTATO
 */
 int led=5;
 int ntc=0;
 int motor=10;
 int medida=0;
 int nivel=700;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}
void monitoriza()
{
  Serial.print("La medida es...\n");
  Serial.print(medida);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  medida=analogRead(ntc);
  monitoriza();
  if(medida>nivel)
  {
    digitalWrite(led,HIGH); // se enciede un aviso 
    digitalWrite(motor,HIGH); //encendido del motor
  }
  else
  {
    digitalWrite(led,LOW);   // apagando aviso y tambien el motor
    digitalWrite(motor,LOW);
  }
}
