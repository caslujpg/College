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

    printf("Aperte 'Enter' para descobrir o porque est� errado fazer \"if(num=10)\" e o que ir� acontecer ou qualquer outra tecla para sair.\n");
    getchar();
    system("cls");
    printf("A express�o \"if(num=10)\" est� errada pois o compilador ir� associar o valor de 10 a vari�vel 'num', a forma correta seria 'if(num == 10)' ai sim seria um operador de compara��o, conforme o exemplo abaixo:\n");
    printf("\nint num;\n printf(\"Digite um n�mero: \");\n scanf(\"%%d\", &num);\n if(num>10) printf(\"\\nO n�mero � maior que 10.\\n\");\n if(num==10) printf(\"\\nO n�mero � igual a 10.\\n\");\n if(num<10) printf(\"\\nO n�mero � menor que 10.\\n\");\n return (0);\n\n");
    printf("Deseja ver o exemplo acima em funcionamento? (S/N).\n");
    scanf("%c", &c);
    system("cls");
    if(c == 's' || c == 'S')
    {
        printf ("Digite um n�mero: ");
        scanf ("%d",&num);
        if(num>10)
        {
            printf("\nO n�mero � maior que 10.\n");
            bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
        }
        if(num==10)
        {
            printf ("\nO n�mero � igual a 10.\n");
            bold(1); printf("\n\bDesenvolvido por: https://github.com/caslujpg\n\n");
        }
        if(num<10)
        {
            printf("\nO n�mero � menor que 10.\n"); bold(1);
            printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
        }
    } 
	else 
	{
        printf("\nAplica��o finalizada.\n");
        bold(1); printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
    }

    return 0;
    }
