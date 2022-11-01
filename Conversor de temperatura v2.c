#include <stdio.h>

int main (){
    float F, C, f , c;

    scanf("%f",&c);
    scanf("%f",&f);
 
  // fahrenheint para celcius
  
    C  = (f - 32)/1.8; 
   
   // celsius para fahrenheint
   
    F = (9*c)/5 + 32; 
   
   
   printf ("%.2f F = %.2f C\n",F,c);
   printf ("%.2f C = %.2f F\n",C,f);
   
   
   
    
return 0;

}