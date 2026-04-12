#include <stdio.h> 

int main(void) {
  double money = 100000.0;
  int days = 0;
  const int goal = 1e6;
  const double interest = 1.10;

  // refactor hard-coded numbers to variables
  // for example: rate as a percentage, target
  // ask the user for 1) the rate percentage 2) the target they want to get to

  while (money <= goal) {
    money *= interest; 
    days++;
    printf("day %d: $%.2f\n", days + 1, money);
  }

  printf("Interest rate today is: %.2f% \n", (interest - 1) * 100);
  printf("It took a total of %d days to reach : $%d \n", days + 1, goal);
  
  return 0;
}
// returns a spons
  