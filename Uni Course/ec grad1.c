#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   float a,b;
   printf("Introduceti a ");
   scanf("%f", &a);
   printf("Introduceti b ");
   scanf("%f", &b);
   if (!a)
        if(!b)
                printf("Ecuatie nedeterminata");
        else
                printf("Ecuatie imposibila");
    else
        printf("Solutia ecuatiei de gr 1 este %f", -b/a);
}