#include <cs50.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    int i ;
    if (argc > 2)
    {
        printf("too many aguments supplied");
        return 1;
    }
    else if (argc <= 1)
    {
        printf("Key is missing");
        return 1;
    }
    else
    {
        printf("%s\t %s", argv[0], argv[1]);
    }


}