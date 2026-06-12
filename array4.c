#include <stdio.h>
int main()
{
    int i, j, a[3][3], b[3][3], sum[3][3];
    printf("enter the element of first matrix=\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("first matrix is=\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("enter the element of second matrix=\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("second matrix is =\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    printf("sum of matrix=\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}