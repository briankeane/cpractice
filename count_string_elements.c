// Exercise 1-6

#include <stdio.h>

#define EOF 0

int main()
{
  int c;
  long blanks_count, tabs_count, newline_count;

  blanks_count = 0;
  tabs_count = 0;
  newline_count = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      tabs_count++;
    }
    
    if (c == '\n')
    {
      newline_count++;
    }
    
    if (c == '\0')
    {
      blanks_count++;
    }
  }

  printf("tabs: %ld\n", tabs_count);
  printf("newlines: %ld\n", newline_count);
  printf("blanks: %ld\n", blanks_count);
}