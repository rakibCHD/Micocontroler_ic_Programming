#include <REGX52.H>

sbit bt = P1^0;
 void delay(void)
{
	int i,j;
	for(i=0;i<500;i++)
		for(j=0;j<100;j++);
	
 }

 void main()
 { 
	 while(1){
				P2=0x40;
						delay();
				P2=0xff;
				delay();
					P2=0xf9; 
						delay();
				P2=0xff;
				delay();
					P2=0x24; 
						delay();
				P2=0xff;
				delay();
					P2=0x30; 
						delay();
				P2=0xff;
				delay();
					P2=0x19; 
						delay();
				P2=0xff;
				delay();
					P2=0x12; 
						delay();
				P2=0xff;
				delay();
					P2=0x02; 
						delay();
				P2=0xff;
				delay();
					P2=0xf8; 
						delay();
				P2=0xff;
				delay();
					P2=0x80; 
						delay();
				P2=0xff;
				delay();
					P2=0x10; 
						delay();
				P2=0xff;
				delay();
					P2=0x08;
						delay();
				P2=0xff;
				delay();
					P2=0x80;
						delay();
				P2=0xff;
				delay();
					P2=0x46;
						delay();
				P2=0xff;
				delay();
					P2=0x40;
						delay();
				P2=0xff;
				delay();
					P2=0x06;
						delay();
				P2=0xff;
				delay();
					P2=0x0e;
						delay();
				P2=0xff;
				delay();
			
		}
 }

