#include <REGX52.H>

sbit led = P1^0;
 
 void delay(unsigned int);


 void delay(unsigned int mstime)
{
  unsigned int i, j;
  for(i=0; i<mstime; i++)
    for(j=0; j<165; j++);   //it's for 1ms delay
 }

 void main()
 {
   while(1)
  {
		led=1;
    delay(2000);
		led=0;
    delay(1000);
  }
 }

