/* Fazer um programa que receba três números obrigatoriamente em ordem crescente e um quarto
número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. 
Suponha que o usuário digitará quatro números diferentes.*/


#include <stdio.h>

int decrescente (int x,int y,int z,int w)
{
	if(x>w) and (y>w) and (z>w)
	{
		m=(&w,&z,&y,&x)
		return m;
	}
	if (x>w) and (y<w) and (z<w)
	{
		m=(&z,&y,&w,&x);
		return m;
	}
	if(x>w) and(y>w) and(z<w)
	{
		m=(&z,&w,&y,&x);
		return m;
	}
	if(x<w) and (y>w) and (z>w)
	{
		m=(&z,&y,&x,&w);
		return m;
	}
}

int main() 
{
	int result,n1,n2,n3;
	printf("Digite tres numeros em ordem crescente: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	printf("Digite um numero: ");
	scanf("%d",&n4);
	result = decrescente(n1,n2,n3,n4);
	printf("Os numeros digitados na ordem crescente sao: %d", result);
	return 0;
}
