#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   int n, suma=0;
   printf("Introduceti n ");
   scanf("%d",&n);
   do
   {
        suma+=n%10;
        n/=10;
   } while (n);
   printf("Suma cifrelor numarului este %d\n", suma);
   


}