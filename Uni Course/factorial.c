#include<stdio.h>

int factorial(int n) //n este parametru formal
{
    int i, fact=1; //variabile locale
    for(i=2;i<=n;i++) fact=fact*i;
    return(fact); 
}

int main()
{
    int v;
    printf("Introduceti o valoare ");
    scanf("%d",&v);
    printf("%d!=%d\n",v,factorial(v));
}