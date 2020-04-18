#include<reg52.h>

sbit ir1=P3^0;
sbit ir2=P3^1;
sbit ir3=P3^2;
sbit lgt1=P1^0;
sbit lgt2=P1^1;
sbit lgt3=P1^2;

sbit ldr=P3^3;

void delay(unsigned int );

void main()
{

	lgt1=1;        //////OFF
	lgt2=1;
  lgt3=1;
	
while(1)
{
	
	if(ldr==1 && ir1==1 )
	{

	lgt1=0;      
	lgt2=1;
  lgt3=1;
	
	delay(200);	
	lgt1=1;      
}

else if(ldr==1 && ir2==1 )
	{
 
	lgt1=1;      
	lgt2=0;
  lgt3=1;
		delay(200);	
	lgt2=1;      

		}
else if(ldr==1 && ir3==1 )
	{
 
	lgt1=1;      
	lgt2=1;
  lgt3=0;
		delay(200);	
	lgt3=1;      

		}
	

		else
	{
		lgt1=1;
	  lgt2=1;
	  lgt3=1; 
	}

}
}

void delay(unsigned int i)
{
	unsigned int j,k;
for(j=0;j<=i;j++)
for(k=0;k<=1275;k++);
}
