#include <REGX52.H>

 
 void delay(void)
{
  int i, j;
  for(i=0; i<1000; i++)
    for(j=0; j<1000; j++);
 }
 
 void main()
 {
   while(1)
  {
    P1=0x01;  //set port P1.0, blue LED ON & red LED OFF
    delay();
    P1=0x00;  //set port P1.3, blue LED OFF & red LED ON
    delay();
  }
 }

