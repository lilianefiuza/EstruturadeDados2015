/* recebe salario base,calcular e mostrar o salarioa  receber,
sabendo­-se que o funcionário tem gratificação de 5% 
sobre o salário base e paga imposto de 7% sobre este salário. 
(imposto sobre o salario+gratificação)*/

/* 7% do salario+gratificação*/


#include <stdio.h>

float valor_a_receber( float salario)
{
	float x,y,salario_grat,recebe,a,imposto;
	x=(salario*5);/*porcentagem*/
	y=(x/100);/*porcentagem*/
	salario_grat= (y+salario);
	a= (salario_grat*7);/*porcentagem em cima do salario + gratificação*/
	imposto= (a/100);
	recebe= (salario_grat-imposto);/*valor a ser recebido (salario + gratificação = valor do salario*/
	return recebe;
}


int main() 
{
	float result, salario_base;
	int ;
	printf("Digite seu salario base: ");
	scanf("%d",&salario_base);
	result = valor_a_receber(salario_base);
	printf(" O salario a receber eh: %f",result);
	return 0;
}
