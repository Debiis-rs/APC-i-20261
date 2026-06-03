#include<stdio.h>
int main(){
    int numInteiro;
    printf("Digite um número inteiro de quatro digitos:");
    scanf("%i", &numInteiro);

    if(numInteiro <1000){
        printf("Número invalído! digite um numero com quatro digitos.\n");
    }


     printf("\n======DECOMPOSIÇÃO DOS NÚMEROS======\n");
      int milhar, centena, dezena, unidade;
     milhar  = (numInteiro /1000)* 1000;
     centena =  ((numInteiro % 1000) / 100) * 100;;
     dezena  =  ((numInteiro % 100) / 10) * 10;
     unidade = numInteiro % 10;
    
    printf("Numero original: %i\n", numInteiro);
    printf("Milhar: %d\n", milhar);
    printf("Centena: %d \n", centena);
    printf("Dezena: %d \n", dezena );
    printf("Unidade: %d \n", unidade );
    
    
    

    return 0;
}