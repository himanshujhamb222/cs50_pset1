#include <stdio.h>
#include <cs50.h>
int main(void)
{
    char hashes='#';
    char spaces=' ';
    int height;
    do
       {
         printf("give me a height less than 23\n");
         height =GetInt();
       }
    while (height<0||height>=23);
    
    for(int i=height-1;i>=0;i--)
    {
         for(int k=0;k<=i-1;k++)
          {
             printf("%c",spaces);
          }
         for(int j=height-1;j>=i;j--)
          {
             printf("%c",hashes);
          }
          printf("%c%c",spaces,spaces);
        
         for(int m=2*height+1;m>=i+height+2;m--)
          {
            printf("%c",hashes);
          }
         for(int n=2*height+1;n>=i+height+3;n--)
         {
            printf("%c",spaces);
         } 
       printf("\n");
    }
printf("\n");
}
