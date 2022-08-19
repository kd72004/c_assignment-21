#include<stdio.h>
struct student{
    int rno;
    int physics;
    int chemistry;
    int maths;
};

struct  student input_data()
{
    struct student s;
    printf(" enter strudent rno , physics marks , chemistry marks , maths marks -> " );
    scanf("%d%d%d%d",&s.rno,&s.physics,&s.chemistry,&s.maths);
    return s;
}

void print_data(struct student s)
{
    printf("\nrno -> %d\nphysics -> %d\nchemistry -> %d\nmaths -> %d\n",s.rno,s.physics,s.chemistry,s.maths);
}

int main()
{
    
    int i;
    int size=0;
    printf("\n enter how many numbers of student data you wanrt to enter -> ");
    scanf("%d",&size);
    struct student s[size];
    for(i=0;i<=size-1;i++)
    s[i]=input_data();
    for(i=0;i<=size-1;i++)
    {
        print_data(s[i]);
    }

}