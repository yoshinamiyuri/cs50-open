#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Symbolic constant for alphabet size
#define ALPHABET 26

int shift(char c);
int k;
int main(int argc, string argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;     
    }
    //// Check that keyword is all letters
    int keylen = strlen(argv[1]);

    for (int i = 0; i < keylen ; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }    
        //Capitalize the letter for the later use
        argv[1][i] = toupper(argv[1][i]); 
        //printf("%c\n", argv[1][i]);

    }
    
    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");
    //printf("%i", key);
    printf("ciphertext: ");
    int index = 0;
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            // Key is previously capitalized, this gives us rotation amount
            int key = shift(argv[1][index]);
			
            // Handle uppercase plaintext characters
            if (isupper(plaintext[i]))
            {
                printf("%c", ((plaintext[i] - 'A' + k) % ALPHABET) + 'A');
            }

            // Handle lowercase plaintext characters
            else if (islower(plaintext[i]))
            {
                printf("%c", ((plaintext[i] - 'a' + k) % ALPHABET) + 'a');
            }
            // Advance keyword position, wrapping if necessary
            index = (index + 1) % keylen;  
            
        }
        
        // Handle other text except for the alphabet
        else 
        {
            printf("%c", (plaintext[i]));

        }

    }
    printf("\n");
    return 0;
}
    
int shift(char key)
{    
    //Add the k from the plain text
    k = (key - 65);
    return k;
}