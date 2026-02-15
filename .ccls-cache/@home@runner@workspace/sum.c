#include <stdio.h>

int main(void) {
  float num1, num2, rv;
  char c;

  printf("Calculator: takes an operation, and 2 numbers, and do math ops\n");

  printf("Enter an operation (+, -, *, /): ");
  rv = scanf("%c", &c);  
    
  printf("Enter the first number: ");
  rv = scanf("%f", &num1);

  printf("Enter the second number: ");
  rv = scanf("%f", &num2);
  
  switch (c) {
    case '+': {
      printf("sum：%f\n", num1 + num2);
      break;
    }
    case '-': {
      printf("sum：%f\n", num1 - num2);
      break;
    }
    case '*': {
      printf("sum：%f\n", num1 * num2);
      break;
    }
    case '/': {
      printf("quotient：%f\n", num1 / num2);
      break;
    }
    default:
      printf("Unknown operation\n");
  }
  
  return 0;
}