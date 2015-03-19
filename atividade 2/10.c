
/*maior o ano mais antigo*/

#include<stdio.h>
#include<time.h>

int data(int dia1,int dia2,int dia3,int mes1,int mes2,int mes3,int ano1,int ano2,int ano3)
{
	if(ano1>ano2)
	{
		printf("cronologicamente a data  %d /  %d / %d\n, eh a maior ",dia1,mes1,ano1);
	}
	if(ano1<ano2)
	{
		printf("cronologicamente a data  %d /  %d / %d\n, eh a maior ",dia2,mes2,ano2);
	}
	if(ano1==ano2)
	{
		if(mes1>mes2)
		{
			printf("cronologicamente a data  %d /  %d / %d\n, eh a maior ",dia1,mes1,ano1);
		}
		if(mes1<mes2)
		{
			printf("cronologicamente a data  %d /  %d / %d\n, eh a maior ",dia2,mes2,ano2);
		}
		if (mes1==mes2)
		{
			if(dia1>dia2)
			{
				printf("cronologicamente a data  %d /  %d / %d\n, eh a maior",dia1,mes1,ano1);
			}
			if(dia1<dia2)
			{
				printf("cronologicamente a data  %d /  %d / %d\n, eh a maior",dia2,mes2,ano2);
			}
			if(dia1==dia2)
			{
				printf("as datas sao iguais");
			}
		}
	}
}

int main()
{
	int dia1,dia2,dia3,mes1,mes2,mes3,ano1,ano2,ano3,result;
	printf("Digite uma data");
	scanf("%d",&dia1);
	scanf("%d",&mes1);
	scanf("%d",&ano1);
	printf("Primeira data:  %d /  %d / %d\n ",dia1,mes1,ano1);
	printf("Digite outra data\n");
	scanf("%d",&dia2);
	scanf("%d",&mes2);
	scanf("%d",&ano2);
	printf("segunda data:  %d / %d / %d \n",dia2,mes2,ano2);
	result= data(dia1,dia2,dia3,mes1,mes2,mes3,ano1,ano2,ano3);
	printf(result);
}
