#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{

    int l; // individual key position
    int v; // new converted key


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


    for (int i = 0, n = strlen(s); i < n; i++) // iterate through each char of string
    {


// once position of key found. we convert into basic alphabetical order. THEN we add this on
         l =  i % strlen(k); // l is the position in the key

    if (islower(k[l]))
            {
                v = k[l] - 'a'; // v is the new converted key
                            //   printf("%d", v);
            }

        else if (isupper(k[l]))
            {
              v = k[l] - 'A'; // 75 - 65 = 10
            //   printf("%i", v);
            }


            if (islower(s[i]))
            {
                printf("%c", (((s[i] - 'a') + v) % 26) + 'a'); // print out lowercase with key;

            }
            else if (isupper(s[i]))
            {
                printf("%c", (((s[i] - 'A') + v) % 26) + 'A');  // print out uppercase with key;
            }

            else

            {
                // l =  (i - 1) % strlen(k);
                printf("%c", s[i]);
                return 0;

            }


    }

}