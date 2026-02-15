// have the user enter a dollar amount
// calculate minimum amount of bills they get
// example: $123.45
// 1 x $100, 1 x $20, 3 x $1, $0.45 in coins
// example: $592.12
// 5 x $100, 1 x $50, 2 x $20, 2 x $1, $0.12 in coins
// example: $200.00
// 2x $100, $0.00 in coins
// example: $5398.60
// 53x $100, 1x $50, 2x $20, 1x $5, 3x $1, $0.60 in coins

#include <stdio.h> 

int main(void) {
  float money;                                                     
  int rv;
  
  printf("give amount: ");
  rv = scanf("%f", &money);

  // casting a float to a integer
  // this drops all the decimal digits at the end
  int dollars = (int) (money);
  // int cents = (int) (money * 100);
  printf("dollars: %d\n", dollars);

  

  int two_hun = dollars / 200;
  printf("%d x $200\n", two_hun);
  // dollars -= two_hun * 200;
  // dollars = dollars - two_hun * 200;
  dollars %= 200;
  // dollars = dollars % 200;
  
  // find the number of $100 dollar bills
  int hundred = dollars / 100;
  printf("%d x $100\n", hundred);
  dollars -= hundred * 100;

  // find the number of $50 dollar bills
  int fifty = dollars / 50;
  printf("%d x $50\n", fifty);
  dollars -= fifty * 50;
  
  // find the number of 20 bills
  int twenty = dollars / 20;
  printf("%d x $20\n", twenty);
  dollars -= twenty * 20;

  // find the number of 10 bills
  int ten = dollars / 10;
  printf("%d x $10\n", ten);
  dollars -= ten * 10;
  
  // find the number of 5 bills
  int five = dollars / 5;
  printf("%d x $5\n", five);
  dollars -= five * 5;

  // find the number of 1 bills
  int one = dollars;
  printf("%d x $1\n", one);

  //I first subtracted the whole number from money, then multiplied by 100 to get the cents
  int cents = (int) (money - (int)(money) * 100);
  printf("cents: %d\n", cents);
  // print number of cents
  // tip: have to understand which variable contains your cents (money)
  // and which variable contains your dollars
  
  return 0;
}


