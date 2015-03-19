/*salário de um funcionário e o percentual de aumento, calcule e mostre o valor
do aumento e o novo salário.*/

#include <stdio.h>

float novo_salario(float s,float y)
{
	float aumento,valor_aumento,x;
	x=(s*y);
	valor_aumento = (x/100);
	printf("valor do aumento: %f", x);
	aumento = (valor_aumento+s);
	return aumento;
}


int main() 
{
	float salario,result,aumento;
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	printf("Digite o percentual de aumento: ");
	scanf("%f",&aumento);
	result = novo_salario(salario,aumento);
	printf ("O novo salario eh: %f ", result);
	return 0;
}
