#include <stdio.h>
#include <math.h>

void main(void)
{
    float a,b,c,x1,x2,x,d,re,im;
    printf("Introduceti a "); scanf("%f", &a);
    printf("Introduceti b "); scanf("%f", &b);
    printf("Introduceti c "); scanf("%f", &c);
    if (!a)
        if (!b)
            if (!c)
                printf("Ecuatie nedeterminata\n");
            else
                printf("Ecuatie imposibila\n");
        else printf("Ecuatie de gradul 1 cu solutie %f\n", -c/b);
    else
    {   d=b*b-4*a*c;
    if(d<0)
        {   re=(-b)/(2*a);im=sqrt(-d)/(2*a);
            printf("Solutie complexa x1=%d+i*%d si x2=%d-i*%d\n", re, im, re, im);     
        }
        else    if(!d)
                    printf("Solutie reala dubla x=%f\n", -b/(2*a));
                else
                {
                    x1=((-b+sqrt(d))/(2*a));x2=((-b-sqrt(d))/(2*a));
                    printf("Solutii reale distincte x1=%f si x2=%f\n",x1, x2);
                }

    }
}