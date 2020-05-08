/*
  Count all number, whitespaces and other characters in text
*/

#include <stdio.h>

void main()
{
  int c, i, whitespace_number, not_whitespace_number;
  int digit_number[10];

  whitespace_number = not_whitespace_number = 0;

  for (i = 0; i < 10; i++)
    digit_number[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' || c <= '9')
      ++digit_number[c - '0']; // very clever way! Happy to see it :D
    else if (c == ' ' || c == '\t' || c == '\n')
      ++whitespace_number;
    else
      ++not_whitespace_number;
  }

  print("Whitespace character number: %d\nNot whitespace character number: %d\nDigit numbers",
        whitespace_number, not_whitespace_number);

  for (i = 0; i < 10; i++)
    printf("%d: %d\n", i, digit_number[i]);
}