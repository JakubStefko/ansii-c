#include <stdio.h>

int main()
{
  int c, line_counter, space_counter, tab_counter;
  line_counter = space_counter = tab_counter = 0;

  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++space_counter;
    else if (c == '\t')
      ++tab_counter;
    else if (c == '\n')
      ++line_counter;

  printf("%d\n%d\n%d\n", space_counter, tab_counter, line_counter);
  return 0;
}