#include <cs50.h>
#include <stdio.h>
#include <string.h>

int len(string);


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
        }

    }






}
