#include <stdio.h>

int main()
{
    int a[20], i, j, temp, n;

    printf("\nEnter Limit: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter Value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {

            if(a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nThe elements are in descending order");
    for(i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }

}
