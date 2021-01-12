#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  float d = 12.3;
  float e = 67.6;

  printf("Tha value of d is %f and the address of d is %p\n The value of e is %f and the address of e is %p\n", d, (void*)&d, e, (void*)&e);

  float* ptrtod = &d;
  float* ptrtoe = &e;
  
  float f = d;
  float g = e;

  *ptrtod = g;
  *ptrtoe = f;

  printf("Tha value of d is %f and the address of d is %p\n The value of e is %f and the address of e is %p\n", d, (void*)&d, e, (void*)&e);

}
