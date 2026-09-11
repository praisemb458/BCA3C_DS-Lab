#include<stdio.h>

int main()
{
    int a[20],i,n,sum=0;
    float avg;

    printf("\n Enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter Value %d:",i+1);
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }
    avg=(float)sum/n;

    printf("\n Sum is:%d",sum);
    printf("\n Average is:%.2f",avg);
}
