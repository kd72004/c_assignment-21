#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[20];
    int  salary;
};
struct  emp input_data()
{
    struct emp e;
    printf("\n enter id -> ");
    scanf("%d",&e.id);
    printf("\n enter name -> ");
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[(strlen(e.name)-1)]='\0';
    printf("\n enter salary -> ");
    scanf("%d",&e.salary);
    return e;
}

void display(struct emp e)
{
    printf("id=%d\nname=%s\nsalary=%d",e.id,e.name,e.salary);
}
void sort_by_salary(struct emp e[],int size)
{
    int i,j;
    struct emp temp;
    for(i=0;i<=size-2;i++)
    {
        for(j=i+i;j<=size-1;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}

int main()
{
    struct emp e[5];
    int i;
    for(i=0;i<=4;i++)
    e[i]=input_data();
    sort_by_salary(e,5);
    for(i=0;i<=4;i++)
    display(e[i]);
    
}