#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	//a linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL, "Portuguese");
	//a linha abaixo muda a cor do texto
	system("color 5E");
	printf("Ol� mundo\n");
	system("pause");
	system("cls");
	printf("Professor Jos� de Assis");
	system("pause");
	return 0;
}
