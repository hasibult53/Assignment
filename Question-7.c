#include <stdio.h>

int main() {
  int rainyDays, cloudyDays, clearDays;

  printf("Enter the number of rainy days in the week: ");
  scanf("%d", &rainyDays);

  printf("Enter the number of cloudy days in the week: ");
  scanf("%d", &cloudyDays);

  clearDays  = 7 - rainyDays - cloudyDays;

  if (clearDays >= 0) {
    printf("There are %d clear days in the week.\n", clearDays);
  } else {
    printf("Invalid input.\n");
  }

  return 0;
}
