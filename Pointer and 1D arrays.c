#include<stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    int len = sizeof(a)/sizeof(int);
    // Access through pointer itself
    for (p = a; p < a + 4; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
    // Access through iterator
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}