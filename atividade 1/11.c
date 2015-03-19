/* Temperatura em graus celsius */


#include <stdio.h>

float grau(float x)
{
	float c;
	c = (5 * ((x-32) / 9));
}


int main() 
{
	float f,result;
	printf("Digite a temperatura em graus Farenheit: ");
	scanf("%d",&f);
	result = grau(f);
	printf ("a temperatura em graus Celsius eh, %d", result);
	return 0;
}
