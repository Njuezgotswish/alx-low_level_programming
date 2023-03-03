#include <stdio.h>
#include <main.h>
/*bnary_to_int - function to convert binary numbers to their unsigned int states */
/* c -b string length counter */
/* uint -corresponding unsigned integer */
/* b - character array with the binary data to be converted */
unsigned int binary_to_uint(const char *b)
{
  int c =0;
  unsigned int uint =0;
  for(int i=0, b[i] != '\0' , i++)
  {c++}
  for(int j=0, j < c, j++)
  {
    uint += b[j] * 2**(c - j);
  }
  return (uint)
