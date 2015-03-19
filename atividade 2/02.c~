/* Faça um programa que receba as três notas; 
calcule e mostre a média aritmetica e a mensagem contante da tabela
Aos alunos que ficaram para exame, calcule e mostre a
nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0*/




#include <stdio.h>

float media_aritmetica( float x,float y,float z)
{
	float m,media;
	m= (x+y+z);
	media= (m/3);
	return media;
}


int main() 
{
	float result,nota1,nota2,nota3,precisa;
	printf("Digite tres notas: ");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	result = media_aritmetica(nota1,nota2,nota3);
	if ((result >=0) and (result <3))
	{
		printf(" REPROVADO");
	}
	if ((result >=3) and (result <7))
	{
		printf(" EXAME");
		precisa= (6-result);
		precisa_tirar = (precisa*3);
		printf("Voce precisa tirar: %f",precisa_tirar); 
	}
	if ((result >=7) and (result =<10))
	{
		printf(" APROVADO");
	}
	return 0;
}
