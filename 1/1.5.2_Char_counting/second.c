#include <stdio.h>

int main()
{
  double counter;

  for (counter = 0; getchar() != EOF; ++counter)
    ;

  printf("%.0f\n", counter);
  return 0;
}