/* Faça um programa que receba um número inteiro e verifique se é par ou ímpar.*/


#include <stdio.h>

char par_impar( int x)
{
	int p;
	char par,impar;
	p=(x%2);
	par= 'PAR';
	impar= 'IMPAR';
	if( p == 0)
	{
		return par;
	}
	else
	{
		return impar;
	}

}

int main() 
{
	int result,n;
	printf("Digite um numero inteiro: ");
	scanf("%d",&n);
	result = par_impar(n);
	printf("O numero digitao eh: %d", result);
	return 0;
}
