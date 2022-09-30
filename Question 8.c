/* Write a program to store information of 10 students and display them using structure.    */

#include<stdio.h>
#include<string.h>

struct student
 {
    int rno;
    int physics;
    int chemistry;
    int maths;
    int total;
};

struct student input_data()
{
    struct student s;

    printf("\n enter roll no,marks of physics,marks of chemestry ,marks of maths -> ");
    scanf("%d%d%d%d",&s.rno,&s.chemistry,&s.physics,&s.maths);

    return s;
}

void display(struct student s)
{
    printf("\n roll no=%d \n chemistry=%d \n physics=%d \n maths=%d\n",s.rno,s.chemistry,s.physics,s.maths);
}

int main()
{
    struct student s[10];
    int i;

    for(i=0;i<=9;i++)
        s[i]=input_data();

    for(i=0;i<=9;i++)
        display(s[i]);

    return 0;
}
