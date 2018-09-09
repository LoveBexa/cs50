#include <cs50.h>
#include <stdio.h>


int main(void)
{

    int height;


// get height of pyramid
    do
    {
        height = get_int("Height: ");
    }
// make sure it is between 0, 23
    while (height < 0 || height > 23);

// the columns
    for (int i = 0; i < height; i++)
    {
        // the spaces before pyramid

        for (int k = height - 1; k > i ; k--)
        {
            printf(" ");

        }
        // the row of hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");

        }
        // spaces in between pyramids
        printf("  ");
        // the row of opposite hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");

        }

        printf("\n");
    }

}