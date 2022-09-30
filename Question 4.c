/* Write a function to find the highest salary employee from a given array of 10
    employees. [ Refer structure from question 1]   */

#include<stdio.h>
#include<string.h>

struct emp
{
    int id;
    char name[20];
    int  salary;
};

void display(struct emp e)
{
    printf("\n id ->%d ",e.id);
    printf("\n name ->%s ",e.name);
    printf("\n salary ->%d ",e.salary);
}

struct emp input()
{
    struct emp e;

    printf("enter id -> ");
    scanf("%d",&e.id);

    printf("enter name -> ");
    fflush(stdin);

    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1] ='\0';

    printf("enter salary -> ");
    scanf("%d",&e.salary);

    return e;
}

void salary(struct emp e[],int size)
{
    int i,max=0;
    int reminder=0;

    for(i=0;i<=size-1;i++)
    {
        if(e[i].salary>max)
        {
            max=e[i].salary;
            reminder=i;
        }

    }

    printf("\n highest  salary  is %d",max);
    printf("\t employee id is %d",e[reminder].id);

}

int main()
{
    struct emp e[5];
    int i;

    for(i=0;i<=4;i++)
    {
        e[i]=input();
    }

    for(i=0;i<=4;i++)
    {
        display(e[i]);
        printf("\n\n");
    }

    salary(e,5);

    return 0;
}
