#include<stdio.h>
#include<stdlib.h>

int main(){

    int quantidade1, quantidade2, quantidade3;
    float preco1, preco2, preco3, dinheiro, total_gasto, troco;
    
    
    scanf("%d",&quantidade1);
    scanf("%d",&quantidade2);
    scanf("%d",&quantidade3);
    scanf("%f",&preco1);
    scanf("%f",&preco2);
    scanf("%f",&preco3);
    scanf("%f",&dinheiro);  
    
    total_gasto = quantidade1 * preco1 + quantidade2 * preco2 + quantidade3 * preco3;
    troco = dinheiro - total_gasto;
   
    printf("%0.2f",troco);
    
    
    return 0;
    
}

