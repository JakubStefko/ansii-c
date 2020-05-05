#include <stdio.h>

int main()
{
  int c;

  /*
    "!=" have highest priority than "=",
    so in upgrade.c we have to add additional
    brackets. In other way c variable would have
    only 0 or 1 value
  */
  c = getchar() != EOF;
  printf("%d\n", c);

  return 0;
}