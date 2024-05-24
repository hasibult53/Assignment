#include <stdio.h>

int main() {
  int a, b, sum, sub, mul;
  float div; 

  printf("Enter two integers : ");
  scanf("%d %d", &a, &b);
  sum = a+b;
  sub = a-b;
  mul = a*b;
  printf("Addition:  %d\n", sum);
  printf("Subtraction:  %d\n", sub);
  printf("Multiplication:  %d\n", mul);

  div = (float)a / b;
  printf("Division: %.2f\n", div);

  return 0;
}
