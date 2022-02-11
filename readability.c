
//Design and implement a program, readability, that computes the Coleman-Liau index of text.

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>

// Be sure to add the function’s prototype

string get_text(void);
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

//Grading the text

int main(void)
{
    string text = get_text();
    float L = (float)count_letters(text) / (float)count_words(text) * 100;
    float S = (float)count_sentences(text) / (float)count_words(text) * 100;
    int index=round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}


//Requesting text from the user

string get_text(void)
{
    string get_text = get_string("Text: ");
    return get_text;
}

//Counting letters

int count_letters(string text)
{
    int i = 0;
    int n = 0;
    while (text[i] != '\0')
    {
        if isalpha(text[i])
        {
            n++;
            i++;
        }
        else
        {
            i++;
        }
    }
    int count_letters = n;
    return count_letters;
}

//We count words

int count_words(string text)
{
    int i = 0;
    int n = 1;
    while (text[i] !='\0')
    {
        if (text[i]==' ')
        {
            i++;
            n++;
        }
        else
        {
            i++;
        }
    }
    int count_words = n;
    return count_words;
}

//We count sentences

int count_sentences(string text)
{
    int i = 0;
    int n = 0;
    while (text[i] !='\0')
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            i++;
            n++;
        }
        else
        {
            i++;
        }
    }
    int count_words = n;
    return count_words;
}