#include<stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int f = 89;
    int *y = a;
    int len = sizeof(a)/sizeof(int);
    int *p[len];
    printf("%u %u", y, a);
    printf("\n a array:\n");
    for(int i = len-1; i >= 0 ; i--)
    {
        printf("| %u| %d|\n", &a[i],a[i]);
        
    }
    printf("\n P array:\n");
    for(int i = len-1; i >= 0 ; i--)
    {
        p[i] = &a[i];
        printf("| %u| %u| %d|\n", &p[i],p[i],**( p + i));
        
    }
    int **ptr = p;

    **ptr++;
    printf("\n ptr = %u , p = %u, *ptr = %u, a = %u", ptr, p, *ptr, a);
    printf("\n %u %u %u",ptr - p, *ptr - a, **ptr);

    *++*ptr;
    printf("\n ptr = %u , p = %u, *ptr = %u, a = %u", ptr, p, *ptr, a);
    printf("\n %u %u %u",ptr - p, *ptr - a, **ptr);

    ++**ptr;
    printf("\n ptr = %u , p = %u, *ptr = %u, a = %u", ptr, p, *ptr, a);
    printf("\n %u %u %d",ptr - p, *ptr - a, **ptr);

    return 0;
}