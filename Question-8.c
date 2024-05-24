#include <stdio.h>

int main() {
  int a, finalrent;

  printf("Enter the initial rent Chef pays : ");
  scanf("%d", &a);

  finalrent = a * 2;

  printf("The final rent Chef needs to pay is %d .\n", finalrent);

  return 0;
}
