#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{


// check no. or arguments given make sure there is only 1
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");

        return 1;
    }

    string k = argv[1]; // get the ceasar KEY value convert into integar k[i] is each letter

    string s = get_string("plaintext: "); // get text
    printf("ciphertext: "); // print out cipher

// iterate through plain text letter by letter


//   string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0, n = strlen(s) ; i < n; i++) // iterate through each char of string
    {
// 1 % 3 = 1
// 2 % 3 = 2
// 3 % 3 = 0
// 4 % 3 = 1
// 5 % 3 = 2

// once position of key found. we convert into basic alphabetical order. THEN we add this on

            int l =  i % 3; // l is the position in the key
int v; // the new converted key
    if (k[l] >= 'a' && k[l] <= 'z')
            {
                v = k[l] - 'a'; //
            }

        else if (k[l] >= 'A' && k[l] <= 'Z')
            {
              v = k[l] - 'A'; // 75 - 65 = 10
            }

else  {
                printf("Error");

            }


            if (islower('s[i]'))
            {
                printf("%c", (((s[i] - 'a') + v) % 26) + 'a'); // print out lowercase with key;

            } // if it it between uppercase A and C
            else if (isupper('s[i]'))
            {
                printf("%c", (((s[i] - 'A') + v) % 26) + 'A');  // print out uppercase with key;

            }

            else

            {
                printf("%c", s[i]);

            }






        // checking if it is lowercase 97 = a to 112 = z and if it + 13 characters along.

    }

}