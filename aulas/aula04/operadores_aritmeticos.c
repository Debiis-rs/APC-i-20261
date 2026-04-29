#include <stdio.h>

#include <math.h>
int main(){
    //1.entrada
    int operador 1;
    int operador 2;
    printf("Entre com um numero inteiro:");
    scanf("%i",&operador1);
    while(getchar() !='\n');

    printf("Entre com outro numero inteiro:");
    scanf("%i",&operador2);
    while(getchar() !='\n');

    //2.processamento
    int soma = operador1 + operador2;
    int subtracao = operador1 - operador2;
    int multiplicacao = operador1 * operador2;
    int divisao = operador1 / operador2;
    int divisao = operador1 % operador2;// modulo, nao é o percentual MOD

    //3.saída
    printf("%i + %i = %i\n"operador1, operador2, soma);
    printf("%i - %i = %i\n"operador1, operador2, subtracao);
    printf("%i * %i = %i\n"operador1, operador2, multiplicacao);
    printf("%i / %i = %i\n"operador1, operador2, divisao);

    //funcoes matematicas
    double potencia = pow (2,3);
    double raiz_quadrada = sqrt (2);
    double logaritimo = log (2);
    double seno = sin (2,3); 

return 0;

}