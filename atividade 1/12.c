/*recebe 3 notas e calcula a media aritmetica*/

#include <stdio.h>

float media(float x,float y,float z)
{
	float soma,nota;
	nota = (x+y+z);
	soma = (nota/3);
}


int main() 
{
	float nota1,nota2,nota3,result;
	printf("Digite 3 notas: ");
	scanf("%d",&nota1);
	scanf("%d",&nota2);
	scanf("%d",&nota3);
	result = media(nota1,nota2,nota3);
	printf ("A media aritmetica eh: %f ", result);
	return 0;
}
