#include <stdio.h>
#include <math.h>

void main(void)
{
   int n,d,prim=1;
   printf("Introduceti nr ");
   scanf("%d", &n);
   for(d=2;d<=sqrt(n)+1;d++)
    if(n%d==0)
    {
        prim=0;
        d=n;
    }
   if ((prim)||(n==2))
    printf("Numarul este prim\n");
   else
    printf("Numarul nu este prim\n");
   
}