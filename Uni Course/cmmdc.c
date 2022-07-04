#include <stdio.h>

void main(void)
{
   int a,b,r;
   printf("Primul nr ");
   scanf("%d", &a);
   printf("Al doilea nr ");
   scanf("%d", &b);
   while(r=a%b)
   {
    a=b;
    b=r;
   }
   // while(r=a%b) a=b,b=r;
   printf("cmmdc este %d\n", b);   
}