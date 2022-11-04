#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
	int operation, leave = 0;
	setlocale(LC_ALL, "Portuguese");

  do {
    printf("\n==============================================\n");
    printf("============ CONTROLE DE ESTOQUE =============\n");
    printf("==============================================\n");
    printf("\nSELECIONE UMA OPCÃO:\n");
    printf("1 - CADASTRAR PRODUTO\n");
    printf("2 - PESQUISAR PRODUTO\n");
    printf("3 - ALTERAR PRODUTO\n");
    printf("4 - REMOVER PRODUTO\n");
    printf("5 - SAIR\n");
    scanf("%d", &operation);

    switch (operation) {
    case 0:
      	system("cls");
      	printf("\nAplicação finalizada.\n");
    	printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
    	leave = 1;
    	break;

    case 1:
    	printf("\nVocê selecionou a opção %d - CADASTRAR PRODUTO\n", operation);
    	system("pause");
    	break;

    case 2:
    	printf("\nVocê selecionou a opção %d - PESQUISAR PRODUTO\n", operation);
    	system("pause");
    	break;

    case 3:
    	printf("\nVocê selecionou a opção %d - ALTERAR PRODUTO\n", operation);
    	system("pause");
    	break;

    case 4:
    	printf("\nVocê selecionou a opção %d - REMOVER PRODUTO\n", operation);
    	system("pause");
    	break;

    case 5:
    	printf("\nVocê selecionou a opção %d - SAIR\n", operation);
      	system("pause");
      	system("cls");
      	printf("\nAplicação finalizada.\n");
    	printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");	
      	leave = 1;
      	break;
      
    default:
      printf("\nVocê selecionou a opção %d, pressione ENTER para continuar...\n", operation);
      system("pause");
      break;
    }
  } while (leave == 0);
  return (0);
}
