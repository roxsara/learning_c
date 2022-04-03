#include <stdio.h>

int main()
{
    int a, b;
    printf("Introduceti cele 2 variabile: ");
    scanf("%d, %d", &a, &b);

    
    a = a - b;
    b = a + b;
    a = b - a;

    printf("Dupa interschimbare, a=%d, b=%d\n", a, b);

    return 0;
}
