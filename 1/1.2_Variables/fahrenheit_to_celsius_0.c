#include <stdio.h>

int fahrenheit_to_celsius(int fahrenheit)
{
  return 5 * (fahrenheit - 32) / 9;
}

int main()
{
  int i = 0;

  while (i < 301)
  {
    printf("%d\t%d\n", i, fahrenheit_to_celsius(i));
    i += 20;
  }

  return 0;
}