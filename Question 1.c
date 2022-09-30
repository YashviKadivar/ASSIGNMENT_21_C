/* Define a structure Employee with member variables id, name, salary   */

#include<stdio.h>

struct emp
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct emp e;

    printf("\n Enter Employee id,name and salary->");
    scanf("%d",&e.id);

    fflush(stdin);
    fgets(e.name,20,stdin);
    scanf("%f",&e.salary);

    printf("\n employee id = %d",e.id);
    printf("\n employee name = %s",e.name);
    printf("\n employee salary = %f",e.salary);

    return 0;

}

