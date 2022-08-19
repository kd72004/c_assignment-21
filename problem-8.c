#include<stdio.h>
#include<string.h>
struct student {
    int rno;
    int physics;
    int chemistry;
    int maths;
    int total;
};
struct student input_data()
{
    struct student s;
    printf("\n enter rno,marks of phy,marks of che ,marks of maths -> ");
    scanf("%d%d%d%d",&s.rno,&s.chemistry,&s.physics,&s.maths);
    return s;
}
void display(struct student s)
{
    printf("\nrno=%d\nchemistry=%d\nphysics=%d\nmaths=%d\n",s.rno,s.chemistry,s.physics,s.maths);
}
int main()
{
    struct student s[10];
    int i;
    for(i=0;i<=9;i++)
    s[i]=input_data();
    for(i=0;i<=9;i++)
    display(s[i]);
}