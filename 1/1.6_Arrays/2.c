/*
  Make histogram for digit number
*/

#include <stdio.h>

void main()
{
  int c, i, j, min, max;
  // my digits
  int digit_number[10] = {2, 7, 9, 7, 8, 3, 4, 2, 0, 5};

  min = __INT32_MAX__;
  max = -__INT32_MAX__ - 1;

  for (i = 0; i < 10; i++)
    if (digit_number[i] > 0)
    {
      if (digit_number[i] < min)
        min = digit_number[i];

      if (digit_number[i] > max)
        max = digit_number[i];
    }

  for (i = max; i >= min; i--)
  {
    printf("%3d |", i);

    for (j = 0; j < 10; j++)
    {
      if (digit_number[j] < i)
        printf("  ");
      else
        printf(" x");
    }
    printf("\n");
  }

  printf("     ");

  for (i = 0; i < 10; i++)
    printf(" %d", i);

  printf("\n");
}