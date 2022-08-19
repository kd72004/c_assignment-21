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
    printf("\n enter emp id ,name and salary-> \n");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    scanf("%f",&e.salary);
    printf("\nemp id = %d",e.id);
    printf("\nemp name = %s",e.name);
    printf("\nemp salary = %f",e.salary);
}