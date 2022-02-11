#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//int convert_argv (string text);
int only_digits(string text);

int main(int argc, string argv[])
{
    string text=argv[1];
    if (argc == 2 && only_digits(text) != 0)
    {
            printf("One %i\nTwo %s\nThree \n", only_digits(text),text);
            return 0;
    }
    else
    printf("Usage: ./caesar key\n");
    return 1;
}

int only_digits(string text)
{
    int result;
    int i = 0, n = strlen(text), s = 0;
    {
    while (i <= n && result != 0 && text[i] != '\0')
        {
            if isdigit(text[i])
            {
            result = 1;
            i++;
            }
            else
            {
            result = 0;
            i++;
            }
        }
    }
    return result;
}

/*int convert_argv (string text)
{
    return atoi(text);
}*/