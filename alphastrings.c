#include <stdio.h>
#include <string.h>
 
char str1[27];
char str2[] = "abcdefghijklmnopqrstuvwxyz";
char str3[60];

int main()
{
  for (int i = 0; i < 26; i++)
    {
          str1[i] = 97+i;
    }

  str1[26] = 0;

  if (strcmp(str1, str2) == 0)
  {
     printf("the strings are identical\n");
  }
  else
  {
    printf("the strings are different\n");
  }

  for (int i = 0; i < 26; i++)
    {
          str1[i] -= 32;
    }

    if (strcmp(str1, str2) == 0)
  {
     printf("the strings are identical\n");
  }
  else
  {
    printf("the strings are different\n");
  }
 

  strcpy(str3, str1);
  strcat(str3, str2);

  printf("str1: %s\n str2:%s\n str3: %s\n", str1, str2, str3);
}
