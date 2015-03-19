/*area de um triangulo*/

#include <stdio.h>

float valor_area(float b,float a)
{
	float area,cont;
	cont = (b*a);
	area = (cont/2);
	return area;
}


int main() 
{
	float base,result,altura;
	printf("Digite o valor da base: ");
	scanf("%f",&base);
	printf("Digite a altura: ");
	scanf("%f",&altura);
	result = valor_area(base,altura);
	printf ("O valor da area eh:%f ", result);
	return 0;
}
