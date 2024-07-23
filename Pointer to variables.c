#include<stdio.h>

int main()
{
    int a = 90;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    printf("\n address of a: %u, address stored at b: %u, &b = %u", &a, b, &b);
    printf("\n address of b: %u, address stored at c: %u, address stored at d = %u, &c = %u", &b, c, d, &c);
    printf("\n&d = %u",&d);
    printf("\n e: %u",e);
    printf("\n *e: %u", *e);
    printf("\n **e: %u", **e);
    printf("\n ***e: %u", ***e);
    return 0;
}