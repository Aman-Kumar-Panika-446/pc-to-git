#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    do
    {
       if(n/1000>=1)
       {
        printf("M ");
        n=n-1000;
       }
       else if(n/900>=1)
       {
       	printf("C M ");
       	n-=900;
	   }
       else if(n/500>=1)
       {
        printf("D ");
        n=n-500;
       }
       else if(n/400>=400)
       {
       	printf("C D ");
       	n-=400;
	   }
       else if(n/100>=1)
       {
        printf("C ");
        n=n-100;
       }
       else if(n/90>=1)
       {
       	printf("X C ");
       	n-=90;
	   }
       else if(n/50>=1)
       {
        printf("L ");
        n=n-50;
       }
       else if(n/40>=1)
       {
       	printf("X L ");
       	n-=40;
	   }
       else if(n/10>=1)
       {
        printf("X ");
        n=n-10;
       }
       else if(n==9)
       {
       	printf("I X");
       	n-=9;
	   }
       else if(n/5>=1)
       {
        printf("V ");
        n=n-5;
       }
       else if(n/4>=1)
       {
        printf("I V ");
        n=n-4;
       }
       else
       {
        printf("I ");
        n=n-1;
       }
    } while (n>0);
    
    return 0;
}