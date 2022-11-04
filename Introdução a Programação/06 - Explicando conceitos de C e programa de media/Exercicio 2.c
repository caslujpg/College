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

    printf("Pressione \"Enter\" para entender o que é case sensitive ou qualquer outra tecla para sair.\n");
    getchar();
    system("cls");
    printf("Então vamos lá!\nCase Sensitive nada mais é do que a diferenciação de caracteres maiúsculos e minúsculos, ou seja, se atribuirmos o valor de 2 a variável \"n\"(n=2) por exemplo, e formos chama-la, teremos que chamar \"n\", se chamarmos \"N\" o compilador não irá reconhecer.\n");
	printf("\nDesejaria ver um exemplo de case sensitive? (S/N))\n");
	scanf("%c", &c);
	system("cls");
	if(c == 's')
	{
		printf("\nRepare que você digitou 's' e não 'S', conforme a instrução, ai está seu exemplo de case sensitive!\n");
		bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
		return 0;
	}
	if(c == 'S')
	{
		printf("Muito bem! Como você pressionou 'S' em maiúsculo, conforme a instrução, você chegou até essa tela. E este já é o exemplo do uso do case sensitive ;P\n");
		bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
		return 0;
	}
	else
	{
		printf("\nAplicação finalizada.\n");
    	bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");	
	}
	
    return 0;
}
