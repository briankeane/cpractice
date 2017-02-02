#import <stdio.h>
#include <string.h>
int main()
{
  char test_string[100];
  int comparison;

  strcpy(test_string, "this is a string");

  comparison = strcmp(test_string, "this is a string");

  if (strcmp(test_string, "this is a string") == 0)
  {
    printf("it was the same\n");
  }
  else
  {
    printf("not the same\n");
  }

  printf("\ncomparison: %d", comparison);

  return 0;
}