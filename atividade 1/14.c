/*aumento de salario em 25%*/

#include <stdio.h>

float novo_salario(float s)
{
	float aumento,cont,x;
	x=(s*25);
	cont = (x/100);
	aumento = (cont+s);
	return aumento;
}


int main() 
{
	float salario,result;
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	result = novo_salario(salario);
	printf ("O novo salario eh: %f ", result);
	return 0;
}
