#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    
    do
    {
        num = get_int("Height: ");
    }
    while (num < 1 || num > 8);
// Error message. Only accept the number which is 1 to 8
//repeat by line
    for (int line = 0; line < num; line++)
        
    {
        //repeat the space until it gets 1 
        for (int spaces = num - line; spaces > 1 ; spaces--)
        {
            printf(" ");           
        }
        //repeat the hashes
        for (int hashes = 0; hashes < line + 1; hashes++)
        {
            printf("#");   
        } 
        //write the space between the pyramids
        printf("  ");
        for (int hashes = 0; hashes < line + 1; hashes++)
        {
            printf("#");   
        } 
        printf("\n");
    }
}