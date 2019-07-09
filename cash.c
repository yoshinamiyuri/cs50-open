#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main (void){
float f;
int cents;
int num = 0;


do
 {
    f = get_float("Give me the money: \n");
    printf("Changed owed: ""%.2f\n", f);
    cents = round(f * 100);
 }
while (cents < 0);

 while (cents >= 25)
 {
     cents = cents - 25;
     num = num + 1;
 }
     while (cents >= 10)
     {
         cents = cents -10;
         num = num + 1;
     }
while (cents >= 5)
{
    cents = cents - 5;
    num = num + 1;
}
    while (cents >= 1)
    {
        cents = cents - 1;
        num = num + 1;
    }
      printf( "%i\n", num);
}

     