#include <stdio.h>

int main(void) {
  printf("===^^===\n");
  printf("Welcome to the Decimal to Hexadecimal Converter\n");
  printf("Enter a number:\n");

  int the_number; // declared an integer variable
  scanf("%d", &the_number); // acquires user input

  printf("Decimal representation:   %9d\n", the_number);
  printf("Converted to hexadecimal: %9X\n", the_number);
  printf("===^^===\n");
  
  return 0;
}
