#include<reg51.h>
sbit S1 = P3^0;
sbit S2 = P3^1;
sbit red = P1^0;
sbit yellow = P1^1;
sbit green = P1^2;

void delay(int d)
{
	int arr[10] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
	int x, num1,num2,i,j;
		for(x=0;x<=d;x++)
		{
			num1 = x/10;   
			S1 = 1;					
			S2 = 0;
			P2 = arr[num1];  
			for(i=0;i<100;i++)
			for(j=0;j<255;j++);

			
			num2 = x%10;    
			S1 = 0;					
      S2 = 1;
			P2 = arr[num2];
			for(i=0;i<100;i++)
			for(j=0;j<255;j++);

		}
}

void main(){
		while(1){
		red=yellow=green=0;
		red=1;
		delay(15);
			red=0;
		yellow=1;
		delay(5);
			yellow=0;
		green=1;
		delay(30);
			green=0;
		}
	}

