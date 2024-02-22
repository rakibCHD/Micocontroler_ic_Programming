int ledb =D1;
int ledg =D3;
int btn = D8;

void setup() {
  pinMode(ledb, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(btn, INPUT);
}
void loop() {
  if(digitalRead(btn)== HIGH)
  {   for(int j=0;j<=10;j++)
      {
         if(j%2 ==0){
            digitalWrite(ledg,HIGH);
            delay(1000);
            digitalWrite(ledg,LOW);
            delay(1000);
          }
          if(j%2 ==1){
            digitalWrite(ledb,HIGH);
            delay(1000);
            digitalWrite(ledb,LOW);
            delay(1000);
          }
      }
  }
  
}
