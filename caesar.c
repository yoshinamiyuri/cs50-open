#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{    
    // Ensure proper usage
    if (argc != 2) 
    {
        printf("Usage: ./caesar key\n");
        return 1;     
    }
    // Check that keyword is all letters
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isalpha(argv[1][i]) != 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Converting the string to an integer
    int k = atoi(argv[1]);
    // at least there is one letter
    if (k < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;   
    }
    //get the string from the user                
    string s = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", (((s[i] - 'a') + k) % 26) + 'a');
            //Z-A = 90 - 65 = 25 + 1 = 26
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", (((s[i] - 'A') + k) % 26) + 'A');
        }
        else 
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
    
}
                     
                     
                     
                     
                     
                     
                     