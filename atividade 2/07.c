/* Faça um programa que receba quatro valores: I, A, B e C. Desses valores, 
I é inteiro e positivo,A, B e C são reais. Escreva os números A, B e C 
obedecendo à tabela a seguir. Suponha que o valor digitado para I 
seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados 
sejam diferentes um do outro.*/



//#include <conio.h>
#include <stdio.h>

int opcao ( int I,float x,float y,float z)
{
	int m;
	switch ( I )
	{
		case 1 : 
			if(x>y) 
			{
				if(y>z)
				{
					m=(&x, &y, &z);
					return m;
				}
				else
					if (x>z)
					{
						m=( &x, &z, &y);
						return m;
					}
					else
					{
						m=( &z, &x, &y);
						return m;
					}
			}
			else
				if (y>z)
				{
					if(x>z)
					{
						m=(&y,&x, &z);
						return m;
					}
					else
					{
						m=( &y, &z, &x);
					}
				}
				else
				{
					m=( &z, &y, &x);
					return m;
				}
		break;

		case 2 :
			if(x>y) 
			{
				if(y>z)
				{
					m=(&z, &y, &x);
					return m;
				}
				else
					if (x>z)
					{
						m=( &y, &z, &x);
						return m;
					}
					else
					{
						m=( &y, &x, &z);
						return m;
					}
			}
			else
				if (y>z)
				{
					if(x>z)
					{
						m=(&z,&x, &y);
						return m;
					}
					else
					{
						m=( &x, &z, &y);
					}
				}
				else
				{
					m=( &x, &y, &z);
					return m;
				}
       
		break;

		case 3 :
			if(x>y) 
			{
				if(y>z)
				{
					m=(&x, &z, &y);
					return m;
				}
				else
					if (x>z)
					{
						m=( &x, &y, &z);
						return m;
					}
					else
					{
						m=( &z, &y, &x);
						return m;
					}
			}
			else
				if (y>z)
				{
					if(x>z)
					{
						m=(&y,&z, &x);
						return m;
					}
					else
					{
						m=( &y, &x, &z);
					}
				}
				else
				{
					m=( &z, &x, &y);
					return m;
				}
        
		break;

		default :
			printf ("Valor invalido!\n");
	}
}



int main() 
{
	int result,I;
	float A,B,C;
	printf("Digite quatro numeros, um inteiro e os outros tres reais : ");
	scanf("%d",&I);
	scanf("%f",&A);
	scanf("%f",&B);
	scanf("%f",&C);
	result = opcao(I,A,B,C);
	printf("A sequencia dos numeros eh:", result);
	return 0;
}
