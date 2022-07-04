#include <stdio.h>

int main(void) {
  printf("===^^===\n");
  printf("Welcome to the Decimal to Hexadecimal Converter\n");
  printf("Enter a number: ");

  int the_number; // declared an integer variable
  scanf("%d", &the_number); // acquires user input    %d - format specifier

  printf("Decimal representation:   %9d\n", the_number); //take up at least 9 characters
  printf("Converted to hexadecimal: %9X\n", the_number);
  printf("===^^===\n");
  
  return 0;
}
