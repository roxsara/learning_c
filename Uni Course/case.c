#include <stdio.h>

void main(void)
{
   int optiune;
   printf("Introduceti optiunea dvs ");
   scanf("%d", &optiune);
   switch(optiune)
   {
    case 1:{printf("Ati ales optiunea 1\n");break;}
    case 2:{printf("Ati ales optiunea 2\n");break;}
    case 3:{printf("Ati ales optiunea 3\n");break;}
    default:printf("Optiune gresita\n");
   }
   
}