#include <stdio.h>
#include "main.h"

/* binary_to_uint - function to convert binary numbers to their unsigned int states */
/* b - character array with the binary data to be converted */
unsigned int binary_to_uint(const char *b)
{
  int c = 0;
  unsigned int uint = 0;
  
  // Count the length of the string
  for (int i = 0; b[i] != '\0'; i++)
  {
    c++;
  }
  
  // Calculate the unsigned int value
  for (int j = 0; j < c; j++)
  {
    uint += (b[j] - '0') * (1u << (c - j - 1));
  }
  
  return uint;
}
