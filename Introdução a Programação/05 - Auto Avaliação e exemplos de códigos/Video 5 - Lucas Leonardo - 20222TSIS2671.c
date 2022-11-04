#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i = 10;
	
	printf("Digite um numero != de 5: \n");
	scanf("%i", &i);
	
	if(i != 5){
		printf("\nA expressao eh: \n");
		printf("TRUE\n");
	} else{
		printf("\nA expressao eh: \n");
		printf("FALSE\n");
	}
	
//	! é um sinal de negação, igual a expressão NOT
	
/*
	1) positivo -> 1
	2) negativo -> 0
*/
	
//	== comparação positiva -> x == y
//	!= comparação negativa -> x != y
	
	return 0;
}
