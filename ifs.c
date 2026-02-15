#include <stdio.h>

int main(void) {
  // number comparisons: == > >= < <= !=
  // and &&, or ||, xor ^

  if (0 <= 10) {
    printf("true\n");
  }

  if (0 != 1) {
    printf("not equal\n");
  }

  if (0 == 1) {
    
  } else if (1 == 0) {
    printf("else if\n");
  } else {
    printf("final else\n");
  }
  
  return 0;
}





