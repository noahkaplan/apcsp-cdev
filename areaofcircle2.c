#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main

double areaOfCircle(double radius)
{
  double area;
  
  area = M_PI * radius * radius;

  return area;

}


int main(int argc, char* argv[]) 
{

  // for testing
  float start = 5.2;
  int reps = 3;


  // checks how many arguments were inputted

  if (argc != 3)
  {
    printf("%s: expected two arguments, please enter two integers\n", argv[0]);
    return 1;
  }


  // check if arg1 is an integer

  int arg1;

  int intCheck = sscanf(argv[1], "%d", &arg1);
  if (intCheck != 1)
  {
    printf("The first argument is not an integer, please enter two integers\n");
    return 1;
  }


  // check if arg1 is positive
 
   if (arg1 < 0)
  {
    printf("The first argument is negative, please enter a positive integer\n");
    return 1;
  }


  // check if arg2 is an integer

  int arg2;

  intCheck = sscanf(argv[2], "%d", &arg2);
  if (intCheck != 1)
  {
    printf("The second argument is not an integer, please enter two integers\n");
    return 1;
  }


  // check if arg2 is positive
  
  if (arg2 < 0)
  {
    printf("The second argument is negative, please enter a positive integer\n");
    return 1;
  }


  // check if arg1 is greater than arg2

  if (arg1 >= arg2)
  {
    printf("The first argument is greater than or equal to the second argument, please make sure that arguement two is greater than argument one\n");
    return 1;
  }



  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end

  for (float i = arg1; i < arg2+1; i++)
  {
   printf("The radius of the circle is %f and the area is %f\n", i, areaOfCircle(i));

  }

  
}
