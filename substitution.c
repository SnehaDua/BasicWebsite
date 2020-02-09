#include <cs50.h>
#include <stdio.h>
#include <string.h>

int len(string);


int main (int argc, char *argv[])
{
    int i, len ;
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
        printf("%s\t %s", argv[0], argv[1]);
    }

    l = len(argv[1]);
    printf("\n length is :%d\n", l);

}

int len(string S)
{
    for (int i = 0; i!= "\0"; i++);
    return i;
}