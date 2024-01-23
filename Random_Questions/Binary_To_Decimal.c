#include<stdio.h>
#include<math.h>
int main()
{
    int arr[20];
    int n;
    printf("Enter binary number:\n");
    scanf("%d",&n);
    int i=0;
    do
    {
       arr[i]= n % 10;
       n=n/10;
       i++;
    } while (n>0);
    
    int number=0;

    for(int j=0;j<i;j++)
    {        
        number=number+(pow(2,j)*arr[j]);
    }
    printf("Decimal number is:%d",number);

    return 0;
}