#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Prompt user for a character
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed: %c.\n", c);
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed: %c.\n", c);
    }
    else
    {
        printf("Invalid input.\n");
    }

}