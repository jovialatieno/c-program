#include <stdio.h> //preprocessor and header file for stdio
int main(){//main is function int - return type
  int a, b, sum;//dec and initialization
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  
  sum = a + b;//summation of the values
  printf("The sum of a and b is: %d", sum);
  
    return 0;
}