/* Write a program to enter the marks of 5 students in Chemistry, Mathematics and
    Physics (each out of 100) using a structure named Marks having elements roll no.,
    name, chem_marks, maths_marks and phy_marks and then display the percentage
    of each student.        */

#include<stdio.h>

struct student {
    int rno;
    int physics;
    int chemistry;
    int maths;
    float per;
};

struct student input()
{
    struct student s;

    printf("\n enter rno->, enter physics-> , enter chemistry-> , enter maths-> ");
    scanf("%d%d%d%d",&s.rno,&s.physics,&s.chemistry,&s.maths);

    return s;
}

struct student claculation_per(struct student s)
{
    float total=s.chemistry+s.physics+s.maths;
    s.per=(total/300.0)*100;

    return s;
}

void print(struct student s)
{
    printf("\n rno -> %d\n percintage -> %f\n",s.rno,s.per);
}

int main()
{
    struct student s[5];
    int i;

    for(i=0;i<=4;i++)
    {
        s[i]=input();
    }

    for(i=0;i<=4;i++)
    {
        s[i]=claculation_per(s[i]);
    }

    for(i=0;i<=4;i++)
    {
        print(s[i]);
    }

    return 0;

}
