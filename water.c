#include <cs50.h>
#include <stdio.h>
int main (void)

{
    
    printf("Give me your length of your shower in minutes\n");
    int length=GetInt();
    int bottles =length*12;
    printf("You use %d bottles in  your shower\n",bottles);
}
