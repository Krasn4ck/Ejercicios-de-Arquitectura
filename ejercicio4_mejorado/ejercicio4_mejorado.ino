/*
 * EJERCICIO NO. 5 TERMOSTATO MEJORADO
 * ADAPTANDO UNA NUEVA MEJORA
 */
 #include<math.h>
 int led=5;
 int ntc=0;
 int motor=10;
 int medida=0;//limite de temperatura para prender el venti
 double nivel=31;
 //incluimos una nueva mejora, la cual nos permite mostrar la temperatura en grados C°
 // esto nos facilita comprender mejor la temperatura
double Thermister(int RawADC)
{
  double Temp;
Temp=log(((10240000/RawADC)-10000));
Temp=1/(0.001129148+(0.000234125+(0.000000876741*Temp*Temp))*Temp);
Temp=Temp-273.15;
return Temp*-1;
}
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}
void monitoriza()
{
  Serial.print("La medida es: ");
  Serial.print(medida);
  Serial.print(" C°");
  Serial.println(" ");
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  medida=Thermister(analogRead(ntc));
  monitoriza();
  if(medida>nivel)
  {
    Serial.println("ESTA COSA SE ESTA CALENTANDO WE, PRENDE EL VENTILADOR WE");
    digitalWrite(led,HIGH); // se enciede un aviso 
    digitalWrite(motor,HIGH); //encendido del motor
  }
  else
  {
    digitalWrite(led,LOW);   // apagando aviso y tambien el motor
    digitalWrite(motor,LOW);
  }
}
