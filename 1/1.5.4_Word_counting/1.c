/*
  Dumb version of wc in Unix
  Count chars, words and lines in text document
*/

#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main()
{
  int c, char_counter, word_counter, line_counter, state;

  char_counter = word_counter = line_counter = 0;
  state = OUT;

  while ((c = getchar()) != EOF)
  {
    ++char_counter;

    if (c == '\n')
      ++line_counter;

    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT && !(c == ' ' || c == '\t' || c == '\n'))
    {
      state = IN;
      ++word_counter;
    }
  }

  printf("Char number: %d\nWord number: %d\nLine number: %d\n", char_counter, word_counter, line_counter);

  return 0;
}