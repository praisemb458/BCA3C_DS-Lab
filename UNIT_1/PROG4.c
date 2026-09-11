#include<stdio.h>

void main()

int a[3],b[3],c[3],i,j=0;

printf("\n Enter Value for A\n");
for (i=0;i<3;i++)
{
    printf("\n Enter Value %d: ",i=1);
    scanf("%d",&a[i]);
}
printf("\n Enter Value for B\n");
for (i=0;i<3;i++)
{
    printf("\n Enter Value %d:",i+1);
    scanf("%d",&b[i]);
}

for (i=0;i<3;i++)
{
    c[j]=a[i];
    j++;
}
{
    for (i=0;i<3;i++)
        c[j]=b[i];
    j++;
}

printf(\n Merged Elements are as follows\n);
for (i=0;i<6;i++)
{
    printf("\n %d",c[i]);
}
