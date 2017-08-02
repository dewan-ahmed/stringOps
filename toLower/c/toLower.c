//Given a string, this program converts it into lowercase
//Using buffer here as typical use of scanf ignores text after whitespace
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    char *buffer;
    size_t bufsize = 32;
    size_t string;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }
   printf("Enter any string: ");
   string = getline(&buffer,&bufsize,stdin);
   printf("You typed: %s\n",buffer);    
   printf("Converted to lowercase: ");
   while(buffer[i]) 
   {
       putchar(tolower(buffer[i]));
       i++;
   }
   printf ("\n");
   return 0;
}
