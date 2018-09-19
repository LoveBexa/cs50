#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{


    long long getCredit;

do {
       getCredit = get_long_long("What is your credit card number? "); // asking for credit number
}

while (getCredit <= 0); // make sure it is positive


   int countNumber = 0; // number of digits

countNumber = log10(getCredit) + 1; // counts total number of digits

// printf("Total digits: %d\n", countNumber); // prints out number of digits

if (countNumber < 13 || countNumber > 16) // invalid if number is not between 13-16
{
 printf("INVALID\n");
}



}
