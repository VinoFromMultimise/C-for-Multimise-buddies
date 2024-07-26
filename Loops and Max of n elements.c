#include<stdio.h>
#include<stdlib.h>

// Maximum element in an array using pointer and for loop

int main()
{
    int count = 0;
    printf("\n How many nunbers you want to input:");
    scanf("%d", &count);
    int *a = (int *)malloc(count * (sizeof(int)));
    printf("\n Enter the numbers one by one with a space:");
    for(int i = 0; i < count; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < count; i++)
    {
        if (a[0] < a[i])
            a[0] = a[i];
    }
    printf("\n The max element is %d", a[0]);
    return 0;
}
