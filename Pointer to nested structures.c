#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct contractEmp
  {
        int contract_period;
        float salary;
  };
struct emp
{
  int id;
  char name[20];
  int sal;
  struct contractEmp c;
};
int main()
{
    struct emp e1;
    struct emp *e = &e1;
    e->id = 100;
    e->sal = 10000;
    strcpy(e->name, "Raghuvaran");
    printf(" \n From pointer to structure:");
    printf(" \n Id : %d \n Name: %s \n Salary: %d", e->id, e->name, e->sal);

    e1.c.contract_period = 10;
    e1.c.salary = 100000;
    e->c.contract_period = 12;
    e->c.salary = 1000000;
    printf(" \n From variable to nested structures:");
    printf(" \n Contract period :%d Salary: %.2f",e1.c.contract_period, e1.c.salary);
    printf(" \n From pointer to nested structures:");
    printf(" \n Contract period :%d Salary: %.2f",e->c.contract_period, e->c.salary);
    return 0;
}