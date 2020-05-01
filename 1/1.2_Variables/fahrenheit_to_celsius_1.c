#include <stdio.h>

int fahrenheit_to_celsius(int fahrenheit)
{
  return 5 * (fahrenheit - 32) / 9;
}

int main()
{
  int i;

  for (i = 0; i < 301; i += 20)
  {
    printf("%d\t%d\n", i, fahrenheit_to_celsius(i));
  }

  return 0;
}