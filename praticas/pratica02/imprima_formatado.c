#include <stdio.h>
int main(){

int quant_camiseta,quant_calca,quant_meiasocial;
    quant_camiseta = 002;
    quant_calca = 001;
    quant_meiasocial = 003;

float Camiseta_valUnit,calca_valUnit,meiasocial_valUnit, Total;
      Camiseta_valUnit = 39.99;
      calca_valUnit = 89.90;
      meiasocial_valUnit = 19.99;
      Total = 229.85;



    printf("\n ==============================\n");
    printf("   N O T A    L E G A L\n");          
    printf ("==============================\n");
    printf("produto  Qnt valor Unit\n");
    printf("Camiseta        %.3i     %.2f \n ", quant_camiseta, Camiseta_valUnit );
    printf("Calca           %.3i     %.2f \n",  quant_calca, calca_valUnit );
    printf("Meia Social     %.3i     %.2f \n",  quant_meiasocial, meiasocial_valUnit);
    printf("==============================\n");
    printf("Total                  %.2f\n", Total);
     
    return 0;
}