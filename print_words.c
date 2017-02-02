// Exercise 1-9
// Write a program that prints one word per line of the input


#include <stdio.h>

#define EOF   0  // might be -1 depends on compiler

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if ((c == ' ') || (c == '\t'))
    {
      printf('\n');
    }
    else
    {
      printf(c);
    }
  }
  return 0;
}
