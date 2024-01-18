#include <REGX52.H>

 
 void delay()
{
  int i, j;
  for(i=0; i<500; i++)
    for(j=0; j<100; j++);
 }
 
 void main()
 {
	 while(1)
	 {
		 P1=0x00;
	 delay();
	 P1=0xff;
	 delay();
	 }
 }
 

 
 
 
 

