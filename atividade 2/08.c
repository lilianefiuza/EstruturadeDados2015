/* calculo da soma,subtração,multiplicaçao,divisao e raiz quadrada*/

#include <stdio.h>
#include <math.h>
int opcao ( int I)
{
	int a,b,soma,sub,mult,div,raiz;
	switch ( I )
	{
		case 1 : 
			printf("digite dois numeros");
			scanf("%d",&a);
			scanf("%d",&b);
			soma= (a+b);
			return soma;
		break;

		case 2 :
			printf("digite dois numeros");
			scanf("%d",&a);
			scanf("%d",&b);
			sub= (a-b);
			return sub;
		break;

		case 3 :
			printf("digite dois numeros");
			scanf("%d",&a);
			scanf("%d",&b);
			mult= (a*b);
			return mult;
		break;
		
		case 4 :
			printf("digite dois numeros");
			scanf("%d",&a);
			scanf("%d",&b);
			div= (a/b);
			return div;
		break;
		
		case 5 :
			printf("digite um numero");
			scanf("%d",&a);
			raiz= sqrt(a);
			return raiz;
		break;

		default :
			printf (" Opcao invalida!");
	}
}



int main() 
{
	int result,I;
	printf("Digite a opcao desejada:\n ");
	printf(" 1. Somar dois números\n, 2. Subtrair dois números\n 3. Multiplicar dois números"); 
	printf("4. Dividir dois números \n, 5. Raiz quadrada de um número");
	scanf("%d",&I);
	result = opcao(I);
	printf("O resultado eh: %d", result);
	return 0;
}
