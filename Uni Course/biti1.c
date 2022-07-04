/* 
Se considera 2 numere intregi n,p unde n in (0,65565) si p in (0,15).
Sa se seteze pe 1 bitul p din reprezentarea interna a lui n
si sa se afiseze noua valoare a lui n.

12345 = 0011 0000 0011 1001 
p=2 (bitul 2)
rezultatul: 0011 0000 0011 1101 - cat este acest numar?
masca nr 1 0000 0000 0000 0001
decalam spre dreapta cu p pozitii 0000 0000 0000 0100
*/

#include<stdio.h>

void main(void)
{
    unsigned int n=12345, p=2;
    n=n|(1<<p); //operatorul sau se foloseste pentru setarea pe 1 a unor biti
    //avand in vedere ca x|0=x si x|1=1 oricare ar fi x
    printf("%u\n",n);
}
