/*
Sa se seteze pe 0 bitul din reprezentarea interna a lui n 
si sa se afiseze noua valoare a lui n.
*/

#include<stdio.h>

void main(void)
{
    unsigned int n=12345, p=3;
    n=n&(~(1<<p));
    printf("%u\n",n);
}