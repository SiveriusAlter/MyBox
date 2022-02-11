#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

bool only_digits(string text);
char rotate(char letter, int key);

int main(int argc, string argv[])
{
    // Checking that we were given only one argv value
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string text = argv[1];
    bool result_of_checking = only_digits(text);

    // Check that the text contains only numbers
    if (result_of_checking != true)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert text from string to int
    int key = atoi(argv[1]);

    // Ask the user to enter text
    string plaint_text = get_string("plaintext: ");

    char letter;
    int index;

    //Printing the result of the transformation
    printf("ciphertext: ");

    for (index = 0; index < strlen(plaint_text);)
    {

        letter = plaint_text[index];
        printf("%c", rotate(letter, key));
        index++;
    }

    printf("\n");


}



// Check that the text contains only numbers
bool only_digits(string text)
{
    int i, n = strlen(text);

    for (i = 0; i < n;)
    {
        if isdigit(text[i])
        {
            i++;
        }
        else
        {
            return false;
        }
    }
    return true;
}


//counting new letters
char rotate(char letter, int key)
{
    int result;
    if isalpha(letter)
    {
        if islower(letter)
        {
            result = (letter + key - 97) % 26;
            result = result + 97;
        }
        else
        {
            result = (letter + key - 65) % 26;
            result = result + 65;
        }
    }
    else
    {
        result = letter;
    }
    return (char)result;
}
