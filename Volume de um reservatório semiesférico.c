#include<stdio.h>

int main (){
 
 float area, raio, perimetro, volume;
 
 scanf("%f %f %f",&area,&raio,&perimetro);
 
 volume = (perimetro / 3) * (area * area) * (3*raio - area);
 
 printf("%.2f", volume);
    
    return 0;
    
}