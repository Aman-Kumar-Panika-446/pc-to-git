#include<stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int arr[20];

    int i=0;
    do
    {
        arr[i]=n%2;
        n/=2;
        i++;
    } while (n>0);
    
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    
    return 0;
}