#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calc_area(float lado)
{
	float area,areatotal;
	area = (lado*lado);
	scanf("%f", &area);	
	areatotal = (2*area);
	return areatotal;
} 	


int main()
{
	int l;
	printf("digite o valor de um lado do quadrado");
	scanf("%d", &l);
	calc_area(l);
	printf("a area total eh %d", calc_area);
	return 0;
}
