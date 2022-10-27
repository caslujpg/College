#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void bold(int status) {
 static const char *seq[] = {"\x1b[0m", "\x1b[1m"};
 printf("%s", seq[!!status]);
}

int main(void)
{
	char c;
	
    setlocale(LC_ALL, "Portuguese");

    printf("Pressione \"Enter\" para entender o que � case sensitive ou qualquer outra tecla para sair.\n");
    getchar();
    system("cls");
    printf("Ent�o vamos l�!\nCase Sensitive nada mais � do que a diferencia��o de caracteres mai�sculos e min�sculos, ou seja, se atribuirmos o valor de 2 a vari�vel \"n\"(n=2) por exemplo, e formos chama-la, teremos que chamar \"n\", se chamarmos \"N\" o compilador n�o ir� reconhecer.\n");
	printf("\nDesejaria ver um exemplo de case sensitive? (S/N))\n");
	scanf("%c", &c);
	system("cls");
	if(c == 's')
	{
		printf("\nRepare que voc� digitou 's' e n�o 'S', conforme a instru��o, ai est� seu exemplo de case sensitive!\n");
		bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
		return 0;
	}
	if(c == 'S')
	{
		printf("Muito bem! Como voc� pressionou 'S' em mai�sculo, conforme a instru��o, voc� chegou at� essa tela. E este j� � o exemplo do uso do case sensitive ;P\n");
		bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
		return 0;
	}
	else
	{
		printf("\nAplica��o finalizada.\n");
    	bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");	
	}
	
    return 0;
}
