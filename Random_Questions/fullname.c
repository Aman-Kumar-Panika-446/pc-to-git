#include<stdio.h>
#include<string.h>
int main()
{
    char firstname[20];
    char lastname[20];

    puts("Enter your first name:");
    gets(firstname);

    puts("Enter your last name:");
    gets(lastname);

    int len1=strlen(firstname);
    int len2=strlen(lastname);

    char fullname[len1+len2+2];
    for(int i=0;i<len1+len2+2;i++)
    {
        
        
        if(i<len1)
        {
            fullname[i]=firstname[i];
        }
        fullname[len1]=' ';
        if(i>len1)
        {
            fullname[i]=lastname[i-len1-1];
        }    
        
    }
    puts(fullname);
    return 0;
}