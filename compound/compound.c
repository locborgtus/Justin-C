#include <stdio.h> 

int main(void) {
  double money = 0.01;
  int days = 0;

  // refactor hard-coded numbers to variables
  // for example: rate as a percentage, target
  // ask the user for 1) the rate percentage 2) the target they want to get to

  while (money <= 1000000000.0) {
    money *= 2; 
    days++;
    printf("day %d: $%.2f\n", days + 1, money);
  }
  printf("It took a total of %d days to reach $1,000,000,000", days + 1);
  return 0;
}
  