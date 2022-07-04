#include <stdio.h>

void main(void)
{
    float a,b;
    float c; /* declaratii de variabile */
    printf("a="); scanf("%f", &a);
    printf("b="); scanf("%f", &b); /* citire date initiale */
    c= (a+b)/2; /* instructiune de calcul */
    printf("%f\n", c); /* afisare rezultat */
}