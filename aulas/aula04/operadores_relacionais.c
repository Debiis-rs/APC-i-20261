#include <stdio.h>
int main(){
  int idade;

   printf("Digite sua idade:");
   scanf ("%i", &idade);
   while (getchar()!='\n');

   printf("Voce eh criança? %i \n ", idade >=0 && idade <= 12);
   //o operador && se um for falso todos sao falsos.
   printf("Voce eh um adolescente? %i\n", idade > 12 && idade < 16);
   printf("Voce eh um jovem?%i\n", idade >= 16 && idade <= 20 );
   //operador de ou ||.
   //operador de negação !.

  
    return 0 ;
}
