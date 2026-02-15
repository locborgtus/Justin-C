#include <stdio.h>

// write a function called calculate_dollars
// input: p, n, d, q
// output: dollars, in float
double calculate_dollars(int p, int n, int d, int q) {
  return p * 0.01 + n * 0.05 + d * 0.1 + q * 0.25;
}

// take in number of coins from the user
// coins should be integers
// with the number of coins, calculate the amount of money the user has
// example:
// 1 penny, 2 nickels, 3 dimes, 4 quarter = 0.01 + 0.10 + 0.30 + 1.00 = $1.41
int main(void) {
  int rv;
  int p, n, d, q;
  
  printf("give num of pennies: ");
  rv = scanf("%d", &p); 
  
  printf("give num of nickels: ");
  rv = scanf("%d", &n); 
  
  printf("give num of dimes: ");
  rv = scanf("%d", &d); 
  
  printf("give num of quarters: ");
  rv = scanf("%d", &q); 

  printf("total money: $%.2f\n", calculate_dollars(p, n, d, q));
} 

            