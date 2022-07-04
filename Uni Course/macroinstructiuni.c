#include <stdio.h>
#define max(a,b) (a)>(b)?(a):(b)

/*
int maxim(int a, int b)
{
    if (a>b) return a;
    else return b;
}
*/

void main(void)
{
    int x,y;
    printf("Introduceti 2 nr: ");
    scanf("%d, %d", &x, &y);
    printf("Maximul este %d\n", max(x,y));
}