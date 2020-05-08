/*
  Program has to read file and output words,
  each word in new line
*/

#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main()
{

  int c, state;
  state = OUT;

  while ((c = getchar()) != EOF)
  {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      state = IN;
      printf('%c', c);
    }
    else if (state = IN)
    {
      state = OUT;
      printf('\n');
    }
  }

  return 0;
}