#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	int num, i=0, answer;
	
	setlocale(LC_ALL, "Portuguese");
	
	do
	{
		printf("\tTabuada \"do-while\"\n\n");
		printf("Digite qual número quer ver a tabuada: ");
		scanf("%d", &num);
		system("cls");
		for(i=0; i<=30; i++)
		{
			printf("%d x %d = %d\n", i, num, i*num);
		}
		system("pause");
		system("cls");
		printf("\n\nDigite a opção desejada -\n");
		printf("\n1 - Novo valor para calcular;");
		printf("\n2 - Sair.\n\n");
		scanf("%d", &answer);
	}while(answer != 2);
		system("cls");
		printf("\nAplicação finalizada.\n");
    	printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");	
		return 0;
}
