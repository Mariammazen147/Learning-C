#include <stdio.h>

int main()
{
    int matrix1[3][3] = {}, matrix2[3][3] = {};
    printf("Enter the first matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %d",&matrix1[i][j]);
        }
    }
    printf("Enter the second matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %d",&matrix2[i][j]);
        }
    }
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("Calculated sum: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}