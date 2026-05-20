#include<stdio.h>

int main(){

    prinf("Tamanho char : %lu byte\n",sizeof (char));
    prinf("Tamanho short int : %lu byte\n",sizeof (short unsigned int));
    prinf("Tamanho int : %lu byte\n",sizeof (unsigned int));
    prinf("Tamanho  long int: %lu byte\n",sizeof (long unsigned int));
    prinf("Tamanho long long int: %lu byte\n",sizeof (long long unsigned int));
    prinf("Tamanho float :%lu byte\n",sizeof (float));
    prinf("Tamanho double :%lu byte\n",sizeof (double));
    prinf("Tamanho long double :%lu byte\n",sizeof (long double));
   
return 0;
}