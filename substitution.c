#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_ciphertext(string, string);
string get_plaintext();
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
                    string p_text = get_plaintext();                    // function call to get plain text from user
                    string key = argv[1];
                    //printf("key :  %s\t %s\n", key, p_text);
                    get_ciphertext(p_text, key);     // function call that converts plain text to cipher text

                    // printf("ciphertext :  %s\n", c_text);
                    return 0;
                    // prints the corresponding cipher text to the screen;
                    //further solution - using the key
                    //printf("\nso far so good: \t %s", p_text);
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


//function to get plain text from the user for conversion
string get_plaintext()
{
    string text = get_string("plaintext : ");
    //int len = strlen(text);
    //printf("you rntered: %s", text);
    return text;
}

// function to convert plain text to cipher text
int get_ciphertext(string P, string K)
{
    //printf("string p: %s\n string k : %s\n", P, K);
    int len = strlen(P);
    //printf("length of P %d", len);
    char C[len];

    for (int i = 0; i <= len ; i++)
    {
        //printf("print c{i]: %s\n &p[i] %s\n", C[i], &P[i]);


        if (isalpha(P[i]))
        {
            //intf("isupper(P[i]) %d \n", isupper(P[i]));
            if (isupper(P[i]))
            {
                int y = P[i] - 65;
                //printf("upper: %d\n", y);
                C[i] = toupper(K[y]);
            }
            else
            {
                int x = P[i] - 97;
                //printf("lower: %d\n \t %c", x, K[x]);
                C[i] = tolower(K[x]);
                // printf("\nc[i]: %c\t\n ", C[i]);
            }
        }
        else
        {
            C[i] = P[i];
            //printf("hiiiiiiii: %c\n", C[i]);
        }

    }
    //printf("C: %c\n", C[2]);
    printf("ciphertext: %s\n", C);
    return 0;
}
