#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    int cents; // Change converts into Cents
    float change; // The change that is owed
    int coin_count = 0; // The amount of coins returned


// int coin_values[] = {25, 10, 5, 1}; // an array that hold the values of the coins in cents.


    do

    {
        change = get_float("How much change is owed: "); // asking for change
    }
    while (change < 0);

    cents = (int)round(change * 100); // converting dollars to cents


    while (cents >= 25)

    {
        cents -= 25;
        coin_count++;
    }

    while (cents >= 10)

    {
        cents -= 10;
        coin_count++;
    }

    while (cents >= 5)

    {
        cents -= 5;
        coin_count++;
    }

    while (cents >= 1)
    {
        cents -= 1;
        coin_count++;
    }



    printf("%i\n", coin_count);  // printing how many coins in total the change amounts to
}