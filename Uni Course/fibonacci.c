#include <stdio.h>

void main(void)
{
   int n,a=1,b=1,c,afisate;
   printf("Introduceti n ");
   scanf("%d", &n);
   printf("%d", a);
   printf("%d", b);
   afisate=2;
   while(afisate<n)
   {
    c=a+b;
    printf("%d", c);
    afisate++;
    a=b;
    b=c;
   }
   printf("\n");
}