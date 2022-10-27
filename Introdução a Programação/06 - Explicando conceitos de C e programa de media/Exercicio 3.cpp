#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void)
{
	int i;
	float maior=0, menor=11, media, somaNotas=0.0, notas[5];
	char final [20];
	
    setlocale(LC_ALL, "Portuguese");
    
    for(i = 0; i < 5; i++)
    {
    	do
    	{
    		printf("Digite a %d° nota: ", i+1);
    		scanf("%f", &notas[i]);
    		if(notas[i] < 0 || notas[i] > 10) printf("Valor digitado inválido! Digite um valor de 0 a 10 para continuar.\n");
		}
		while(notas[i] < 0 || notas[i] > 10);
    }

    for(i = 0; i < 5; i++)
	{
		if(notas[i] < menor) menor = notas[i];
		if(notas[i] > maior) maior = notas[i];
		somaNotas+=notas[i];
	}
	
	media = somaNotas / 5;
	
	if(media < 3) strcpy(final, "está reprovado");
	else if(media >= 7) strcpy(final, "está aprovado.");
	else strcpy(final,"ficou de prova final.");
	
	getchar();
	system("cls");
	printf("\nMaior nota: %0.2f", maior);
	printf("\nMenor nota: %0.2f", menor);
	printf("\nMédia semestral: %0.2f", media);
	printf("\nO Aluno %s", final);
    
    return 0;
}
