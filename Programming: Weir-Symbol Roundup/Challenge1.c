#include <stdio.h>

int main()
{
   float x;
   // Input
   printf("Adicione um numero:");
   scanf("%f", &x);
   x *= 5;
   printf("Resultado x*5 = %.1f\n",x);
   x /= 3; 
   printf("Resultado x\3 = %.1f\n",x);
   return(0);
}