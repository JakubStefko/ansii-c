#include <stdio.h>

#define TEMPERATURE_LOWEST 0
#define TEMPERATURE_HIGHEST 300

float fahrenheit_to_celsius(int fahrenheit)
{
  return (5.0 / 9.0) * (fahrenheit - 32);
}

int main()
{
  int i;

  printf("%3s %6s\n", "[F]", "[C]");

  for (i = TEMPERATURE_LOWEST; i <= TEMPERATURE_HIGHEST; i += 20)
  {
    printf("%3d %6.1f\n", i, fahrenheit_to_celsius(i));
  }

  return 0;
}