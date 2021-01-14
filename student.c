#include <stdio.h>
#include <string.h>



// student structure
//struct Student...

typedef struct {
  char firstName[15];
  char lastName[15];
  int age;
  int studentId;
} Student;


void printStudent(Student* student)
{
  printf("-----------------Student-----------------\n");
  printf(" First Name: %s\n", student->firstName);
  printf(" Last Name: %s\n", student->lastName);
  printf(" Age: %d\n", student->age);
  printf(" Student Id: %d\n", student->studentId);
}


void printAllStudents(Student students[], int num)
{
  // call printStudent for each student in students
  for (int i = 0; i < num; i++)
  {
    printStudent (students + i);
  }
}


int main()
{
Student students[10];
char input[256];
 
  // an array of students
  //xxx students;

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    printf("What is your first name?\n");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &students[numStudents].firstName);

    printf("What is your last name?\n");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &students[numStudents].lastName);

    printf("What is your age?\n");
    while (1) 
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", &students[numStudents].age) == 1) break;
      printf("Not a valid age. Please try once more\n");
    }

    printf("What is your student Id?\n");
    while (1) 
      {
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", &students[numStudents].studentId) == 1) break;
      printf("Not a valid student Id. Please try once more\n");
      }

      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
