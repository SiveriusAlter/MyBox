#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Height;
    int i;
    int j;
    int n;
//Input validation
    do
    {
        Height = get_int("Height? \n");
    }
    while (Height < 1 || Height > 8);
//Cycle for drawing stairs

    for (i = 0; i < Height; i++)
    {
//Cycle for drawing indent
        for (j = 1; j < Height - i; j++)
        {
            printf(" ");
        }
//Cycle for drawing block
        for (n = 0; n <= i; n++)
        {
            printf("#");
        }
        printf("\n");
    }
}