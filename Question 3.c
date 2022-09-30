/* Write a function to display employee data. [ Refer structure from question 1 ]   */

#include<stdio.h>

struct emp
{
    int id;
    char name[20];
    float salary;
};

void display_data (struct emp e)
{
    printf("\n employee id = %d",e.id);
    printf("\n employee name = %s",e.name);
    printf("\n employee salary = %f",e.salary);
}

int main()
{
    struct emp e;

    printf("\n enter employee id ,name and salary-> \n");
    scanf("%d",&e.id);

    fflush(stdin);
    fgets(e.name,20,stdin);
    scanf("%f",&e.salary);

    display_data(e);

    return 0;

}
