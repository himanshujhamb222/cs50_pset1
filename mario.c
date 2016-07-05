#include <cs50.h>
#include <stdio.h>
int main (void)
{ 
    char hashes,spaces;
    int row,col1,col2,height;  
    spaces=' ';
    hashes='#';
    do
     {
        printf("give me a height less than 23\n");
        height =GetInt();
     }
     while (height<0||height>23);
       
         for(row=1; row<=height;row++)
        {
           for (col1=height-1;col1>=row;col1--)
             {
               printf("%c",spaces);
             }
        
           for(col2=1;col2<=row+1 ;col2++)
            {
              printf("%c",hashes);
            }
           printf("\n");
        }
}
