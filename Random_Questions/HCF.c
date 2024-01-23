#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    
    int min;
    if(a>b)
    {
        min=b;
    }
    else{
        min=a;
    }

    int hcf;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF of %d & %d is: %d",a,b,hcf);
    
    return 0;
}