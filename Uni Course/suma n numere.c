#include <stdio.h>

void main(void)
{
   int n, suma=0,i;
   printf("Introduceti n ");
   scanf("%d", &n);
   for(i=1;i<=n;i++)
        suma+=i;
    printf("Suma este %d \n", suma);
}
