#include <stdio.h>

void main()

{
    int a[20], i, pos, n;
    printf("\nEnter Limit: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter Value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter position from which you want to delete value: ");
    scanf("%d", &pos);

    pos= pos - 1;

    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n = n - 1;

    printf("\nArray after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
