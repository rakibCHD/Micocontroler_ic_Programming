 #include <LiquidCrystal.h>

const int pulsePin = 7;

int pulseHigh; 
int pulseLow; 
float pulseTotal; 
float frequency; 
  
  
  const int digitPins[] = {2, 3, 4, 5}; 
  const int segmentPins[] = {8, 9, 10, 11}; 
  
  const byte digitSegments[10] = {
    0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0X09};

    void setup() {
      Serial.begin(9600);
          pinMode(pulsePin,INPUT);

      for (int i = 0; i < 4; i++) {
        pinMode(digitPins[i], OUTPUT);
        pinMode(segmentPins[i], OUTPUT);
        digitalWrite(digitPins[i], LOW);
        digitalWrite(segmentPins[i], LOW);
      }
    }

 void displayDigit(int digit, int value) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(digitPins[i], LOW);
      }
      for (int i = 0; i < 7; i++) {
        digitalWrite(segmentPins[i], bitRead(digitSegments[value], i));
      }
      digitalWrite(digitPins[digit-1],HIGH);
      delay(5);
    }

    
void clearDisplay(){
  for (int i = 0; i < 4; i++) 
        digitalWrite(digitPins[i], LOW);
   for (int i = 0; i < 4; i++) 
        digitalWrite(segmentPins[i], LOW); 
      
}


 void displayNumber(int number)
    {
      if(number == 0)
      {
        PORTB = 0x00;
         for (int i = 0; i < 4; i++){ 
           digitalWrite(digitPins[i], HIGH);}
      }
      
      int rem =0;
      int count = 0;  
        while (number > 0) {
          rem = number%10;
          number = number / 10;     
          displayDigit(count+1,rem);
          count++;  
         }
         
    }


void loop() {

   pulseHigh = pulseIn(pulsePin,HIGH);
    pulseLow = pulseIn(pulsePin,LOW);
    pulseTotal = pulseHigh + pulseLow;
    
    frequency=1000000/pulseTotal;

     Serial.print("Frequency is: ");
     Serial.println(frequency);
    
  
        displayNumber(frequency);
}
