#include<stdio.h>

/* 1. Function prototyping
   2. Function declaration and definition
   3. Function call
   4. Call by value
   5. Call by reference
*/

int main()
{
    float calc_area_by_val(int, int);
    float calc_area_by_ref(int*, int*);
    int radius = 10, height = 20;
    float area, area_1;

    area = calc_area_by_val(radius, height);

    // radius and height is calculated for diff values - changes inside the function - displaying what's inside scope of main()
    printf("\n Radius = %d, Height = %d, Area = %f", radius, height, area);

    area_1 = calc_area_by_ref(&radius, &height);
    // radius and height is calculated for diff values - changes inside the function - but displaying what's stored in &radius and &height
    printf("\n Radius = %d, Height = %d, Area = %f", radius, height, area_1);

    return 0;
}
float calc_area_by_val(int r, int h)
{
    r = 20;
    h = 30;
    return (3.14 * r * r * h);
}
float calc_area_by_ref(int *r, int *h)
{
    *r = 20;
    *h = 30;
    float a = (3.14 * (*r) * (*r) * (*h));
    return a;
}