#include <stdio.h>

void main()
{
    int a[10], i, pos, val, n;

    printf("\n Enter limit :");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\n Enter value %d :", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n Enter position at which you want to insert value : ");
    scanf("%d", &pos);
    pos = pos - 1;

    printf("\n Enter new value to be inserted :");
    scanf("%d", &val);

    if (pos < 0 || pos > n || n >= 10)
    {
        printf("\n Invalid position!");
    }
    else
    {
        for (i = n - 1; i >= pos; i--)
        {
            a[i + 1] = a[i];
        }

        a[pos] = val;

        n++;

        printf("\n Array elements after insertion: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
