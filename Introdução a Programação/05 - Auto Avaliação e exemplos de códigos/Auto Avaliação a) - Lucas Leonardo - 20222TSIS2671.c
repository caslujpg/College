#include <stdio.h>
int main() {
	
    char s1[25], s2[25];
    
    printf(" Digite a primeira string: ");
    gets(s1);
    
    printf("\n Digite a segunda string: ");
    gets(s2);
    
    printf("\n\n As strings lidas sao:\n\n %s \n %s", s1, s2);
    printf("\n\n A segunda letra da primeira string eh: %c", s1[1]);
    printf("\n A segunda letra da segunda string eh: %c ", s2[1]);
    
    return 0;
}
