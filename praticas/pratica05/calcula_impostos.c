#include<stdio.h>
int main(){
float numUm, numDois;
    printf("Digite o primeiro numero real:");
    scanf("%f", &numUm);

    printf("Digite o segundo numero real:");
    scanf("%f", &numDois);

    printf("\nOs numeros digitados foram: %.2f, %.2f",numUm,numDois);

   printf("\n======OPERAÇÕES======\n");

   float soma = numUm + numDois;
   float subtracao = numUm - numDois;
   float divisao = numUm / numDois;
   float multiplicao = numUm * numDois;

   printf("Adição dos números: %.2f +  %.2f = %.2f\n", numUm, numDois ,soma);
   printf("Subtração dos números:  %.2f - %.2f =  %.2f\n", numUm, numDois ,subtracao);
   printf("Divisão dos números:  %.2f / %.2f =  %.2f\n", numUm, numDois ,divisao);



    return 0;
}