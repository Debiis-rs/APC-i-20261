#include <stdio.h>
    int main(){

    char tecla_pressionada;

    printf("Pressione uma tecla: ");
    scanf("%c",&tecla_pressionada);
    printf("Voce pressionou a tecla %c\n", tecla_pressionada);
    while(getchar()!='\n');// limpa o buffer

    int idade;

    printf("Informe sua idade: ");
    scanf("%i", &idade);
    while(getchar()!='\n');// limpa o buffer
    printf("voce tem %i anos\n", idade);

    float preco;
    printf("Informe o preco da passagem:");
    scanf("%f",&preco);
    while(getchar()!='\n');// limpa o buffer
    printf("O preco da passagem eh %.2f\n", preco);


        return 0;
    }