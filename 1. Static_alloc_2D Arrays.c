#include<stdio.h>

int main()
{
    int rows, cols;
    printf("\n Enter the desired rows:");
    scanf("%d", &rows);
    printf("\n Enter the desired columns:");
    scanf("%d", &cols);
    int a[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("\n Enter the a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
