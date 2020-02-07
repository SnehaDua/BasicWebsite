#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


void CLF(int, int, int);
int count_letters(string, int);
int count_words(string, int);
int count_sentences(string, int);


int main(void)
{
    string text = get_string("Text : ");
    int len = strlen(text);
   // printf("length is %d: \n", len);
//printf("and the test u entered is as below:\n %s\n\n",text);

//printf("text[i] %c\n", text[0]);


/*
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
   }*/
   
   int lc = count_letters(text, len);
   int wc = count_words(text, len);
   int sc = count_sentences(text, len);
   
  // printf("letter_count : %d \n word_count : %d \n sentence_count : %d \n ",letter_count ,word_count+1, sentence_count);
   CLF(lc, wc, sc);
}


//function for counting letters in the text entered by the user
int count_letters(T, L)
{
    int letters = 0;
    for(int a; a<L; a++)
    {
        if(isalpha(T[i])
        {
            letters++;
        }
    }
    return letter;
}


//function for counting words in the text entered by the user
int count_words(T, L)
{
    int words = 0;
    for(int a; a<L; a++)
    {
        if(isalpha(T[i])
        {
            words++;
        } 
    }
    return words;
    
}


//function for counting sentences in the text entered by the user
int count_sentences(T, L)
{
    int sentences = 0;
    for(int a; a<L; a++)
    {
         if(isalpha(T[i])
        {
            Sentences++;
        }
    }
        
    }
    return sentences;
    
}


//function to calculate grade using formula
void CLF(Lc,Wc,Sc)
{
    float L= 0, S=0;

    L = (Lc/Wc)*100;
    S = (Sc/Wc)*100;

    float Index = (0.0588 * L) - (0.296 * S) - 15.8;
    if (Index < 1)
    {
        printf("before Grade 1\n");
    }
    else if (Index >16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        int grade = round(Index);
    printf("Grade %d\n", grade);
    }
    //int Grade = round(Index);
    //printf(" index is : %d Grade", Grade);

}