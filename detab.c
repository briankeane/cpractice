// Exercise 1-19 
// --  assignment is to replace tabs with 2 spaces, but I'll replace spaces with '_'
//         so that I can see the results.
//         
//   

#include <stdio.h>

int get_correct_char(int input_c)
{
  if (input_c == ' ')
  {
    return '_';
  }
  else
  {
    return input_c;
  }
}


int main()
{
  char input_string[101];
  char output_string[101];

  fgets(input_string, 100, stdin);

  for (int i=0;i<102;i++)
  {
    if (input_string[i] == EOF)
    {
      break;
    }
    else
    {
      output_string[i] = get_correct_char(input_string[i]);
    }
  }

  printf("the original string is: \n%s\n", input_string);
  printf("the processed string is: \n%s", output_string);
  return 0;
}