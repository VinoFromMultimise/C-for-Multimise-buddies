#include<stdio.h>
#include<stdlib.h>

// Sum of n elements by passing array as a parameter to function
int s = 0;
int main()
{
    int fun_sum(int[], int);
    int count = 0;
    printf("\n How many nunbers you want to input:");
    scanf("%d", &count);
    int *a = (int *)malloc(count * (sizeof(int)));
    printf("\n Enter the numbers one by one with a space:");
    for(int i = 0; i < count; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = fun_sum(&a[0], count);
    printf("\n Sum of the elements entered: %d", sum);
    return 0;
}
int fun_sum(int a[], int limit)
{
    for(int i = 0; i < limit; i++)
    {
            s += a[i];
    }
    return s;
}
