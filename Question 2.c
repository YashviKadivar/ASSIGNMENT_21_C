/* Write a function to take input employee data from the user. [ Refer structure from
    question 1 ]    */

#include<stdio.h>

struct emp
{
    int id;
    char name[20];
    float salary;
};

struct emp input_data(struct emp e)
{
    printf("\n Enter employee id,name and salary->");
    scanf("%d",&e.id);

    fflush(stdin);
    fgets(e.name,20,stdin);
    scanf("%f",&e.salary);

    return e;
}

int main()
{
  struct emp e;
  e=input_data(e);

    printf("\n employee id = %d",e.id);
    printf("\n employee name = %s",e.name);
    printf("\n employee salary = %f",e.salary);
}
