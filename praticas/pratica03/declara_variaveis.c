#include<stdio.h>

int main(){

    int idade;
    char sexo;
    float altura;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    while (getchar()!='\n');

    printf("Digite seu sexo (digite 'M' para masculino ou 'F' para feminino): ");
    scanf(" %c", &sexo); 

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Sua idade é: %i\nSeu sexo é: %c\nSua altura é: %.2f\n", idade, sexo, altura);

    return 0;
}