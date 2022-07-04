#include <stdio.h>

void main(void)
{
   int x=5, y=7;
   if (x)
    if (y) printf("1\n");
    else; // sau facem instrctiune compusa
   else printf("2\n");
}