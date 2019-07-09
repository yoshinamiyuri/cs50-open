#include <cs50.h>
#include <stdio.h>

int main(void){
int num;
    
do
 {
    num = get_int("Give me an integer: \n");
    printf("Height: ""%i\n", num);
 }
while (num < 1 || num > 8);
 
    for(int line = 0; line < num; line++)
    {
        for (int spaces = num -line; spaces > 1 ; spaces--)
        {
            printf("  ");           
        }
        for(int hashes = 0; hashes < line + 1; hashes++){
            printf("# ");   
        } 
           printf("\n");
    }

    
   
        
}