/* numero maior entre 2*/




#include <stdio.h>

float maior( float a,float b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int main() 
{
	float result,x,y;
	printf("Digite tres notas: ");
	scanf("%f",&x);
	scanf("%f",&y);
	result = maior(x,y);
	printf("o numero maior eh: ", result);
	return 0;
}
