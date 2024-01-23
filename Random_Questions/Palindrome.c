#include<stdio.h>
#include<string.h>
int main()
{
    char input[20];
    puts("enter your word:");
    gets(input);
    
    int len=strlen(input);

    char reverse[len+1];

    for(int i=0;i<len;i++)
    {
        reverse[i]=input[len-1-i];
        
    }
    reverse[len]='\0';
    
    if(strcmp(input,reverse)==0)
    {
    	printf("Yes!\tSting is PALINDROME");	
	}
	else
	{
		printf("sorry !\tString is not PALINDROME");
	}

    return 0;
}