#include <stdio.h>

int main()
{
  char input_string[101];
  char output_string[101];

  int str_length;
  int i, j;

  fgets(input_string, 100, stdin);
  printf("you input: \n");
  printf("%s\n\n", input_string);
  
  // Count the string length
  str_length = 0;
  for (i=0;i<101;i++)
  {
    if (input_string[i] != EOF)
    {
      printf("couting character %d: %c\n", i, input_string[i]);
      str_length++;
    }
    else
    {
      break;
    }
  }

  printf("string length: %d\n\n", str_length);

  j = 0;
  for (i=str_length-3;i>=0;i--)
  {
    output_string[j] = input_string[i];
    printf("output_string[%d]: %c\n", j, output_string[j]);
    j++;
  }
  output_string[j] = '\n';

  printf("reversed, your string is: \n%s", output_string);

  return 0;
}