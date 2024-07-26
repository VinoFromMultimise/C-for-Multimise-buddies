#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp
{
  int id;
  char name[20];
  int sal;
}s;
int main()
{
    struct emp *e = &s;
    e->id = 100;
    char nam[20] = "Raghuvaran";
    strcpy(e->name,nam);
    e->sal = 100000;
    printf("\n From normal variables:");
    printf("\n Name: %s \n Id : %d\n Salary: %d", e->name,e->id, e->sal);
    return 0;
}