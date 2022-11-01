#include <stdio.h>

int main(){

int num;

printf("Digite o numero: ");
scanf ("%d", &num);

if (num%7 == 0) printf("E multiplo de 7");
else printf("Nao e multiplo de 7");

return 0;

}