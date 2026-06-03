#include<stdio.h>
int main(){
    int numero;
    printf(" Digite um numero inteiro:");
    scanf("%i",&numero);

    printf("\n-----Resultados das Operações de Incremento-----\n");
    printf("Número original: %d\n", numero);
    printf("Número com pré-incremento (++ num): %d\n", ++numero);
    printf("Número com pós-incremento (num ++): %d\n", numero++);
    printf("Valor final apos incremento: %d\n", numero);

    printf("\n-----Resultados das Operações de decremento-----\n");
    printf("Número original: %d\n", numero);
    printf("Número com pré-decremento (--num): %d\n", --numero);
    printf("Número com pós-decremento (num--): %d\n", numero--);
    printf("Valor final apos decremento: %d\n", numero);
    



    return 0;
}