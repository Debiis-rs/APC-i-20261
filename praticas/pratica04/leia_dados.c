#include<stdio.h>

int main(){

    int idade;
    char sexo;
    float altura;


    printf("Digite sua idade:");
    scanf("%i", &idade);

    printf("Digite seu sexo(digite 'M' para masculino ou 'F' para feminino): ");
    scanf(" %c", &sexo);

    printf("Digite sua altura:");
    scanf("%f", &altura);
    
    printf("\n======= Ficha com os seus dados =======\n");
    printf("\n sua idade é: %i \n seu sexo é: %c\n sua altura é: %.2f\n", idade, sexo, altura);

return 0;
}