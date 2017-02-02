// Exercise 1-7
// Write a program that copies from input to output, replacing
// a series of blank characters with only one blank character

#include <stdio.h>

int main()
{
  int c;
  bool blank_just_printed_flag = false;

  while ((c= getchar()) != EOF)
  {
    if ((c == '\0') && (blank_just_printed_flag == true))
    {
      continue;
    }
    else
    {
      putchar(c);

      if (c == '\0')
      {
        blank_just_printed_flag = true;
      }
      else
      {
        blank_just_printed_flag = false;
      }
    }
  }
  return 0;
}


