#include <stdio.h>
// #include <stdbool.h>

int main(void) {
  // remember types!!!!
  // when declaring variables, types must be specified

  int integer = 123;
  float f = 4.567;
  double d = 8.9823742;
  // bool b = true;
  
  printf("Hello my name is: %s, age: %d\n", "Justin", 17);
  printf("Integer is: %d\n", integer);
  printf("float is: %f\n", f);
  printf("double is: %f\n", d);
  // printf("bool is: %b\n", b);
  printf("\t 大覃宏途 \n");
  printf("sum: %d, difference: %d, product: %d, quotient: %d, remainder: %d\n",
    69 + 69,
    2 - 10,
    2 * 3,
    69 / 3,
    10 % 3);

  printf("hello\n");
  
  return 0;
}