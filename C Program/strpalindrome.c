#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);

    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;

 	}
 	if(c==i)
 	    printf("string %s is palindrome",s);
    else
        printf("string %s is not palindrome",s);

 	 
     
    return 0;
}