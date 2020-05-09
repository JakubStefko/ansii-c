/*
  Using self-declated power function
*/

#include <stdio.h>

#define ERROR_CODE -1

// function declaration
long power(int base, int n);

// main function
void main()
{
  int i;

  for (i = 0; i < 10; i++)
    printf("%d^%d = %ld\n", i, i, power(i, i));
}

// function definition
long power(int base, int n)
{
  if (n < 0)
    return ERROR_CODE;

  long result = 1;

  for (; n > 0; n--)
    result *= base;

  return result;
}