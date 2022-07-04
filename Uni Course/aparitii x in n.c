#include <stdio.h>

void main(void)
{
   int n,x,nraparitii=0,ultimacifra;
   printf("Introduceti n ");
   scanf("%d",&n);
   printf("Introduceti cifra ");
   scanf("%d",&x);  
   do
   {
    ultimacifra=n%10;
    if(ultimacifra==x) nraparitii++;
    n/=10;
   } while (n);
   printf("Numarul de aparitii este %d\n", nraparitii);
}