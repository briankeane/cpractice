// Exercise 1-8
// 
// replace each tab with the >,\b,- characters and each
// backspace with the <,\b,- characters

#include <stdio.h>

#define EOF 0
{
  int c;
  while ((c == getchar()) != EOF)
  {
    if (c == '\t')
    {
      putchar('>');
      putchar('\b');
      putchar('-');
    }
    else if (c == '\b')
    {
      putchar('<');
      putchar('\b');
      putchar('-');
    }
    else
    {
      putchar(c);
    }
  }
}