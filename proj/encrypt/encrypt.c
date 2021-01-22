//
// encrypt.c
//

#include <string.h>

#include "encrypt.h"


char CHARS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int CHARS_LEN = 62;


char shiftChar(char c, int shift, int direction)
{
  // implement the character shift here:
  //  given a char c shift it either forwards (direction == 1) or backwards (direction == 0)
  //  use the CHARS array above
  //  return the newly shifted char
  //
  // eg.
  //   shiftChar('c', 3, 1) : 'f'
  //   shiftChar('S', 2, 0) : 'P'
  //   shiftChar('b', 3, 0) : '8'

	for (int i = 0; i < CHARS_LEN; i++)
	{
		if (CHARS[i] == c)
		{
			int index = i;
			shift = shift % CHARS_LEN;
			if (direction == 1)
			{
				for (int i = 0; i < shift; i++)
				{
					index++;
					if (index == CHARS_LEN)
					{
						index = 0;
					}
				}
			}

			else
			{
				for (int i = 0; i < shift; i++)
				{
					index--;
					if (index < 0)
					{
						index = CHARS_LEN - 1;
					}
				}
			}

			return CHARS[index];
		}
	}

	return c;

}


void encrypt(char str[], int shifts[], int shiftslen)
{
  for (int i = 0; i < strlen(str); i++) 
  {
    char c = str[i];

    str[i] = shiftChar(c, shifts[i%shiftslen], 1);
  }
}


void decrypt(char str[], int shifts[], int shiftslen)
{
  for (int i = 0; i < strlen(str); i++) 
  {
    char c = str[i];

    str[i] = shiftChar(c, shifts[i%shiftslen], 0);
  }
}


void caesarEncrypt(char str[], int shift)
{
  int shifts[] = { shift };
  encrypt(str, shifts, 1);
}


void caesarDecrypt(char str[], int shift)
{
  int shifts[] = { shift };
  decrypt(str, shifts, 1);
}


