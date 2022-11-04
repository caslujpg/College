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
    int num;

    setlocale(LC_ALL, "Portuguese");

    printf("Aperte 'Enter' para descobrir o porque está errado fazer \"if(num=10)\" e o que irá acontecer ou qualquer outra tecla para sair.\n");
    getchar();
    system("cls");
    printf("A expressão \"if(num=10)\" está errada pois o compilador irá associar o valor de 10 a variável 'num', a forma correta seria 'if(num == 10)' ai sim seria um operador de comparação, conforme o exemplo abaixo:\n");
    printf("\nint num;\n printf(\"Digite um número: \");\n scanf(\"%%d\", &num);\n if(num>10) printf(\"\\nO número é maior que 10.\\n\");\n if(num==10) printf(\"\\nO número é igual a 10.\\n\");\n if(num<10) printf(\"\\nO número é menor que 10.\\n\");\n return (0);\n\n");
    printf("Deseja ver o exemplo acima em funcionamento? (S/N).\n");
    scanf("%c", &c);
    system("cls");
    if(c == 's' || c == 'S')
    {
        printf ("Digite um número: ");
        scanf ("%d",&num);
        if(num>10)
        {
            printf("\nO número é maior que 10.\n");
            bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
        }
        if(num==10)
        {
            printf ("\nO número é igual a 10.\n");
            bold(1); printf("\n\bDesenvolvido por: https://github.com/caslujpg\n\n");
        }
        if(num<10)
        {
            printf("\nO número é menor que 10.\n"); bold(1);
            printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
        }
    } 
	else 
	{
        printf("\nAplicação finalizada.\n");
        bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
    }

    return 0;
    }
