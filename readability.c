#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 

int main(void)
{
    string text = get_string("Text : ");
    int len = strlen(text);
    printf("length is %d: \n", len);
//printf("and the test u entered is as below:\n %s\n\n",text);

printf("text[i] %c\n", text[0]);



int letter_count = 0, word_count = 0, sentence_count = 0;

 for(int i = 0; i<len; i++)
   {
       if(isalpha(text[i]))
       {
           letter_count++;

       }
       else if(isblank(text[i]))
       {
           word_count ++;
       }else if((text[i] == 46) || (text[i] == 63) || (text[i] == 33))
       {
           sentence_count ++;
       }
   }
   printf("letter_count : %d \n word_count : %d \n sentence_count : %d \n ",letter_count ,word_count+1, sentence_count);



}


