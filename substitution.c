#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int duplicates(string);

int main(int argc, char *argv[])
{
    int i = 0 ;

    if (argc > 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (argc <= 1)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else
    {
        //calculating the length of the key
        int len = strlen(argv[1]);
        //printf("\n length is :%d\n", l);

        if (len != 26)                          //validating key length
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        else
        {
            //call function
            //int a =  valid_key(argv[1]);
            string A = argv[1];
            int j = 0, count = 0;
            while (j <= 26)
            {
                if (isalpha(A[j]))                //non alphabetic chars in key
                {
                    count++;
                    //printf("A[j]:  %c\n", A[j]);
                }

                j++;
            }

            //printf("COUNT %d", count);
            if (count != 26)
            {
                printf("Key must only contain alphabetic characters.");
                return 1;
            }
            else
            {
                int D = duplicates(argv[1]);
                if (D != 0)                 //duplicates
                {
                    printf("Key must not contain repeated characters");
                    return 1;
                }
                else
                {
                    //further solution - using the key
                    printf("so far so good");
                }
            }
        }

    }
}

//function to find duplicates
int duplicates(string A)
{
    for (int i = 0; i < 26 ; i++)
    {
        for (int j = i + 1; j < 26; j++)
        {
            if (A[i] == A[j])
            {
                return 1;
            }
        }
    }
    return 0;

}





