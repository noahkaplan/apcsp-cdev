#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

  int d = c;
  int e = a;

  a = d;
  c = e;

  printf("a = %d and c = %d\n", a, c); 

}
