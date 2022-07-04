#include <stdio.h>
#define PAR(a) (a)%2==0?1:0

int main()
{
    if (PAR(9+1)) printf("este par\n");
    else printf("este impar\n");
}