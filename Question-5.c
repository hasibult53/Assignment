#include <stdio.h>

int main() {
  int money;

  printf("Enter the amount of money: ");
  scanf("%d", &money);

  if (money >= 20000) {
    printf("Gucci Bag and a Gucci Belt.\n");
  } else if (money >= 10000) {
    printf("Gucci Bag.\n");
  } else if (money >= 5000) {
    printf(" Levis Bag.\n");
  } else {
    printf(" Something.\n");
  }

  return 0;
}
