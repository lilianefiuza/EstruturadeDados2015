#include <stdio.h>

/* Recebe 4 notas e calcula a media */

float somar(float a,float b, float c, float d)
{
	float soma,media;
	soma=(a+b+c+d)
	media = (soma/4);
	return media
}

int main() 
{
	float nota1,nota2,nota3,nota4,X;
	printf("Digite quatro notas");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	scanf("%f",&nota4);
	X= somar(nota1,nota2,nota3,nota4);
	printf("a soma das quatro notas eh %d: ",X);
	return 0;
}
