#include <stdio.h>

int main()
{
  int c, line_counter = 0;

  while ((c = getchar()) != 'x')
    if (c == '\n')
      ++line_counter;

  printf("%d\n", line_counter);
  return 0;
}