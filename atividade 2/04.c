/* Faça um programa que receba as três numeros e mostre-os 
em ordem crescente. Suponha que o usuário digitará 
três números diferentes.*/


#include <stdio.h>

int crescente( int &x,int &y,int &z)
{
	int m; 
	if(x>y) 
	{
		if(y>z)
		{
			m=(&x, &y, &z);
			return m;
		}
		else
			if (x>z)
			{
				m=( &x, &z, &y);
				return m;
			}
			else
			{
				m=( &z, &x, &y);
				return m;
			}
	else
		if (y>z)
		{
			if(x>z)
			{
				m=(&y,&x, &z);
				return m;
			}
			else
			{
				m=( &y, &z, &x);
				return m;
			}
		else
		{
			m=( &z, &y, &x);
			return m;
		}
}


int main() 
{
	int result,n1,n2,n3;
	printf("Digite tres numeros: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	result = crescente(n1,n2,n3);
	printf("Os numeros digitados na ordem crescente sao: %d", result);
	return 0;
}
