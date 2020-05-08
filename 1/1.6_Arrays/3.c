/*
  Make histogram for any character
*/

#include <stdio.h>

void main()
{
  int i, j, max, min;
  int ascii[256];

  // initializing empty ascii array
  for (i = 0; i < 256; i++)
    ascii[i] = 0;

  // filling it with some values to show histogram
  ascii[65] = 9;  // 'A'
  ascii[72] = 3;  // 'H'
  ascii[91] = 7;  // '['
  ascii[106] = 2; // 'j'
  ascii[50] = 3;  // '2'

  // defining min and max on histogram
  min = __INT32_MAX__;
  max = -1;

  for (i = 0; i < 256; i++)
    if (ascii[i] > 0)
    {
      if (ascii[i] < min && ascii[i] > 0)
        min = ascii[i];

      if (ascii[i] > max)
        max = ascii[i];
    }

  // showing actual histogram
  for (i = max; i >= min; i--)
  {
    printf("%3d |", i);

    for (j = 0; j < 256; j++)
      if (ascii[j] > 0)
        if (ascii[j] < i)
          printf("  ");
        else
          printf(" x");
    printf("\n");
  }

  printf("     ");

  for (i = 0; i < 256; i++)
    if (ascii[i] > 0)
      printf(" %c", i);

  printf("\n");
}