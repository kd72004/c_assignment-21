#include<stdio.h>
struct emp
{
    int id;
    char name[20];
    float salary;
};
struct emp input_data(struct emp e)
{
    printf("\n enter emp id ,name and salary-> \n");
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
    printf("\nemp id = %d",e.id);
    printf("\nemp name = %s",e.name);
    printf("\nemp salary = %f",e.salary);
}