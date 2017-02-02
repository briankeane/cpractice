// Exercise 1-12
// Write a program to print a histogram of the lengths of words in its input

#include <stdio.h>

int main()
{
  int c, i, j, word_length;
  int number_of_letters[10];
  
  word_length = 0;
  for (i=0;i<word_length;++i)
  {
    number_of_letters[i] = 0;
  }


  // PSEUDOCODE:
  // 
  // WHILE not eof
  while ((c = getchar()) != EOF)
  {
    printf("counting")  
    // IF it's the end of a word
    if (((c == ' ') || (c == '\n') || (c == '\t')) && (word_length != 0))
    {
      // increment appropriate array element
      ++number_of_letters[word_length];
      
      // reset world length
      word_length = 0;
    }
    // ELSE  (it's the beginning of the word)
    else
    {
      // increment word_length
      ++word_length;
    }
  }

  // DRAW the histogram
  for (i=0;i<10;i++)
  {
    printf("%d: ", i);
    for (j=0;j<number_of_letters[i];j++)
    {
      printf("-");
    }
  }

  // ENDIF
  return 0;
}