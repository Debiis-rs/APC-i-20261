#include<stdio.h>
 int main(){
    int primeiro_numero, segundo_numero;

    printf("Entre com o primeiro inteiro:");
    scanf("%i",&primeiro_numero);

    printf("Entre com o segundo numero inteiro:");
    scanf("%i",&segundo_numero);

    printf(" \n==== OS NUMEROS DIGITADOS ====\n");
    printf (" O primeiro número digitado foi %i.\n O segundo número digitado foi %i.\n", primeiro_numero, segundo_numero);
    
    return 0;

}