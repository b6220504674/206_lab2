#include <stdio.h>
int main()
{
	float x,y,z;
	char i;
	scanf("%c",&i);
	if(i=='A')
	{
	    scanf("%f",&x);
		float(y)=x-200;
		z=199+(y*3);	
	}
	else if(i=='B')
	{
	    scanf("%f",&x);
		float(y)=x-200;
		z=299+(y*3);	
	}
	printf("%.2f",z);
	return 0;	
}
