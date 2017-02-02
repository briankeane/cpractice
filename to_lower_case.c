// Exercise 1-13

#include <stdio.h>

int main()
{
  while ((c = getchar()) != EOF)
  {
    putchar(lower(c));
  }
  return 0;
}

int lower(int c)
{
  if ((c >= 'A') && (c <= 'Z'))
  {
    return c + 32;
  }
  else
  {
    return c;
  }
}