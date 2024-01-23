#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr2[n+1];

    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    printf("Enter element to be insert:");
    scanf("%d",&arr2[n]);

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr2[i]<=arr2[j])
            {
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    for(int i=0;i<n+1;i++)
    {
        printf("%d  ",arr2[i]);
    }

    
    return 0;
}