/*
  Program have to read lines and
  show the longest line
*/

#include <stdio.h>

#define MAX_LINE_LENGTH 1000
#define EOL '\0' // end of line guardian

int get_line(char line[], int max_line_length, char eol);
void copy_line(char from[], char to[], char eol);

// main meat
void main()
{
  int line_length, max_line_length;
  char line[MAX_LINE_LENGTH];
  char longest_line[MAX_LINE_LENGTH];

  max_line_length = 0;

  while ((line_length = get_line(line, MAX_LINE_LENGTH, EOL)) > 0)
    if (line_length > max_line_length)
    {
      max_line_length = line_length;
      copy_line(line, longest_line, EOL);
    }

  if (max_line_length > 0)
    printf("%s\n", longest_line);
}

// save line to 'line' array and return current line length
int get_line(char line[], int max_line_length, char eol)
{
  int c, i;

  for (i = 0; (i < max_line_length - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
    line[i] = c;

  if (c == '\n')
  {
    line[i] = c;
    ++i;
  }

  line[i] = eol;

  return i;
}

// copy all characters from 1 array to another
void copy_line(char from[], char to[], char eol)
{
  int i = 0;

  while ((to[i] = from[i]) != eol)
    ++i;
}