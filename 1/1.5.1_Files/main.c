#include <stdio.h>

int main()
{
  /*
    I am using int, not char here because
    char doesn't have EOL which i need for
    this specific program - copying I to O
  */
  int c;

  do
  {
    c = getchar();
    putchar(c);
  } while (c != EOF);

  return 0;
}