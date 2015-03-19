#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calc_area(float r)
{
	float pi,area;
	pi = (3,141592);
	area = (pi * (r*r));
}

int main(void)
{
	float raio;
	printf("Para saber a area do circulo informe o valor do raio ");
	scanf("%f", &raio);
	calc_area(raio);
	printf ("o valor da area eh %f", &calc_area);
	return 0;
}
