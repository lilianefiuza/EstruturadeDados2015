#include <stdio.h>

/* Soma de dois numeros */

int soma (int x,int y)
{
	s= (x+y);
	return s;
}

int main() 
{
	int a,b,result;
	printf("digite dois numeros");
	scanf("%d",&a);
	scanf("%d",&b);
	result = soma(a,b);
	printf("a soma dos dois numero eh %d: ",result);
	return 0;
}
