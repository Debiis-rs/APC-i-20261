#include<stdio.h>
 int main(){
    float nota_A1, nota_dois;

    printf("Insira a primeira nota:");
    scanf("%f",&nota_A1);

    printf("Insira a segunda nota:");
    scanf("%f",&nota_dois);

    printf("\n===== SUAS NOTAS =====\n");
    printf("\n A sua primeira nota é: %.2f.\n A sua segunda nota é: %.2f.\n", nota_A1, nota_dois);
    
    return 0;

}