#include<stdio.h>

void main(void)
{
   int n,i,suma=0,t[10];
   printf("Introduceti numarul de elemente ale tabloului ");
   scanf("%d",&n);
   printf("Introduceti elementele tabloului\n");
   for(i=0;i<n;i++)
   {
    printf("t[%d]= ",i);
    scanf("%d",&t[i]);
   }
   for(i=0;i<n;i++)
    suma=suma+t[i];
   printf("Suma elem tabloului este %d\n",suma);
}