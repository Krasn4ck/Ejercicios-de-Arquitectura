/*
 * EJERCICIO NO. 5
 * AUMENTAR Y DISMINUIR LA LUMINOSIDAD DE UN LED
 */
 int light=0;
 int led=11;
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  for(light=0;light<=255;light=light+3)
  {
    analogWrite(led,light);
    delay(30);
  }
  for(light=255;light>=0;light=light-3)
  {
    analogWrite(led,light);
    delay(30);
  }
}
