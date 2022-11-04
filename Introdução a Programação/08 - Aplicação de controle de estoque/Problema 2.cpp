#include <stdio.h>
#include <locale.h>

int main(void) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int inicialValue = 0, finalValue = 0, i = 0, addPar = 0, addImp = 0, countImp = 0, add = 0;
	double medImp = 0;

	printf("Informe o valor inicial x:\n");
	scanf("%i", &inicialValue);
	
	printf("Informe o valor final y:\n");
	scanf("%i", &finalValue);
	
	while (finalValue <= inicialValue) {
		printf("Informe um valor final maior que o valor inicial:\n");
    	scanf("%i", &finalValue);   
	}
	
	for (i = (inicialValue + 1); i < finalValue; i++) 
	{
    	if (i % 2 == 0)
      		addPar = addPar + 1;
    	else {
    		addImp = addImp + i;
    		countImp = countImp + 1;
    	}
    	
    	add = add + i;
	}
  	
	medImp = addImp / countImp;
	
	printf("Existem %d números pares entre x e y.\n", addPar);
	printf("A média dos números ímpares entre x e y é %.2f.\n", medImp);
	printf("A soma de todos os números entre x e y é %d.", add);
	printf("\n\nAplicação finalizada.\n");
    printf("\nDesenvolvido por: https://github.com/caslujpg\n\n");
	return 0;
}
