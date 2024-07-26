#include<stdio.h>

int result = 0;
int *res;
int *aptr;
int **bptr;
int *fun_add(int*, int*);
int **fun_mul(int**);
    
int main()
{
    int a = 10, b = 20;
    printf("\n Program starts\n");
    aptr = fun_add(&a, &b);
    int temp = *aptr;
    printf("\n Addition of %d and %d is %d", a, b, *aptr);
    bptr = fun_mul(&aptr);
    printf("\n Square of %d is %u", temp, **bptr);
    return 0;
}
int *fun_add(int* x, int* y)
{
    result = *x + *y;
    return (&result);
}
int **fun_mul(int**a)
{
    int ***r = &a;
    ***r = ***r * ***r;
    return (*r);
}
