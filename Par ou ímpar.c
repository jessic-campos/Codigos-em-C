#include <stdio.h>

int main(){

int num;

printf("Digite o numero: ");
scanf("%d", &num);

if(num%2 == 0) printf("E numero par");
else printf("E impar");

return 0;

}