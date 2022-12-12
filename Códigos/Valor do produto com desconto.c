#include<stdio.h>

int main (){
    
    float valor, desconto, preco_final;
    
    scanf("%f %f", &valor, &desconto);
    
    preco_final = valor - (valor * ( desconto/100));
    
    printf("O valor do produto eh %.2f reais com desconto de %.2f%% fica por %.2f reais.", valor,desconto,preco_final);
    
    return 0;
    
    
    
}