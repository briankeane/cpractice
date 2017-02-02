// Exercise 1-21
// 
// -- remove all comments from a c program
// 
// 

#include <stdio.h>

int main()
{
  char input_string[101];
  char output_string[101];
  int output_string_index;

  output_string_index = 0;

  fgets(input_string, 100, stdin);


  // FOR each letter in input_string
  for (int i=0;(i<101) && (input_string[i] != '\n');i++)
  {
    // IF the character is a '/'
    if (input_string[i] == '/')
    {
      // IF the next letter is also a '/'
      if ((i != 100) && (input_string[i+1] == '/'))
      {
        // advance i until next-line or EOF
        while (input_string[i] != '\n')
        {
          i++;
        }
      // ELSE IF the next letter is a '*'
      }
      else if ((i != 100) && (input_string[i+1] == '*'))
      {
        // advance past comment start
        i = i + 2;
        // advance until '*/'
        while ((i < 101) && (input_string[i] != '*') && (input_string[i+1] != '/'))
        {
          printf("advancing! input_string[i] is %c\n", input_string[i]);
          i++;
        } // ENDWHILE
        // advance past end of comment
        i = i + 2;
      } // ENDIF
    } // ENDIF

    // copy the character
    printf("copying %c to location %d\n", input_string[i], i);
    output_string[output_string_index++] = input_string[i];
  } // ENDFOR
  printf("your output_string is: \n%s", output_string);
  return 0;
}
// PSUEDOCODE:
// -----------
// do_not_copy_until_character = 'x';
// FOR each letter in input_string
  // IF the character is a '/'
    // IF the next letter is also a '/'
      // advance i until next-line or EOF
    // ELSE IF the next letter is a '*'
      // advance i until '*/' or EOF 
    // ENDIF
  // ENDIF
  // copy the character
//