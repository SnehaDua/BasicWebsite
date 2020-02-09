#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int valid_key(string);

int main (int argc, char *argv[])
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

        if (len != 26)
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
            while (j<=26)
            {
                if(isalpha(A[j]))
                {
                    count++;
                    printf("A[j]:  %c\n",A[j]);
                }

                j++;
            }

            printf("COUNT %d",count);
            if (count != 26)
            {
                printf("Key must only contain alphabetic characters.");
                return 1;
            }else
            {
                printf("so far so good");
            }
        }

    }
}


/*
int valid_key(string A)
{
    int j = 0;
    while (isalpha(A[j]))
    {
        j++;
    }

    if (j != 26)
    {
        printf("Key must only contain alphabetic characters.");
    }else
    {
        printf("so far so good");
    }
return 0;
}

*/



