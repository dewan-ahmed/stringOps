//Given a string, this program converts it into lowercase
#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char string[100];
   int i = 0;
   printf("Enter any string: ");
   scanf("%s", string);
   printf("The input string is converted to lowercase: ");    
   while(string[i] ) 
   {
      putchar(tolower(string[i]));
      i++;
   }
   printf ("\n");
    return 0;
}
