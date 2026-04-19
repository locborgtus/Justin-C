#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>

// write a function that compares 2 numbers, a and b
// if a is smaller than b, return -1
// if a is great than b, return 1
// if a and b are equal return 0
int min(int a, int b) {
  if (a < b) {
    return -1;
  } else if (a > b) {
    return 1;
  }
  
  return 0;
}

// write a function called isEven()
// takes in 1 number
// returns 1 if number is even, 0 if odd
int isEven(int number) {
  if (number % 2 == 0) {
    return 1;
  }
  return 0;
}

// write a function called isOdd()
// takes in 1 number
// returns 1 if number is odd, 0 if even
int isOdd(int number) {
  // if (number % 2 != 0) {
  //   return 1;
  // }
  // return 0;

  // a number is either odd or even, and nothing else
  // a number is odd, it is NOT even
  // a number is even, it is NOT odd
  return !isEven(number);
}

int main(void) {
  // printf("1, 2: %d\n", min(1, 2));
  // printf("10, 2: %d\n", min(10, 2));
  // printf("10, 10: %d\n", min(10, 10));
  // printf("1 means odd, and 0 means even: %d\n", isOdd(2));
  // printf("1 means even, and 0 means odd: %d\n", isEven(22));

  // seed the random number generator, then print
  srand(1234);
  for (int i = 0; i < 1000; i++) {
    printf("random number %d: %d\n", i, rand());
  }
  
  return 0;
}
