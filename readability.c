#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
      string text[] = get_string("Text : ");
    int len = strlen(text[]);
    printf("length is %d: \n", len);


    for(int i = 0; i<len; i++)
   {
       if(isalpha(text[i]))
       {
           letter_count++;

       }
       else if(text[i] == " " && isalpha(text[i+1]))
       {
           word_count ++;
       }else if(text[i] == "." || text[i] == "?" || text[i] == "!")
       {
           sentence_count ++;
       }
   }
   printf("letter_count : %d \n word_count : %d \n sentence_count : %d \n ",letter_count ,word_count, sentence_count);


}