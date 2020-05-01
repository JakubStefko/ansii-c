#include <stdio.h>

float celsius_to_fahrenheit(int celsius)
{
  return celsius * (9.0 / 5.0) + 32;
}

int main()
{
  int i;

  printf("%3s %6s\n", "[C]", "[F]");

  for (i = 0; i < 301; i += 20)
  {
    printf("%3d %6.1f\n", i, celsius_to_fahrenheit(i));
  }

  return 0;
}