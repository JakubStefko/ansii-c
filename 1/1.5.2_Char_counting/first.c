#include <stdio.h>

int main()
{
  long counter = 0;

  while (getchar() != EOF)
    ++counter;

  printf("%ld\n", counter);
  return 0;
}