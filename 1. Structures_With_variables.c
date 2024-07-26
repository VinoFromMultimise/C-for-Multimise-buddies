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
    s.id = 100;
    char nam[20] = "Raghuvaran";
    strcpy(s.name,nam);
    s.sal = 100000;
    printf("\n From normal variables:");
    printf("\n Name: %s \n Id : %d\n Salary: %d", s.name, s.id, s.sal);
    return 0;
}