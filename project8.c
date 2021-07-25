#include<stdio.h>
#include<conio.h>
#include<string.h>

struct org
{
    char name[30];
    int salary,age,phn_no;
};

void main()
{
    struct org employee[20];
    int n,i;
    clrscr();
    printf("\nEnter the number of employeed in your organization(<=20):");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Person %d\n Name:",i+1);
        scanf("%s",&employee[i].name);

        printf("\nEmployee Salary:");
        scanf("%d",&employee[i].salary);

        printf("\nEmployee Age:");
        scanf("%d",&employee[i].age);

        printf("\nEmployee phn_no:");
        scanf("%d",&employee[i].phn_no);
    }

    printf("\nEmployees Information\n");
    for(i=0;i<n;i++)
    {
        printf("\nPerson %d\n Name:%s",i+1,employee[i].name);
        printf("\nEmployee Salary:%d",employee[i].salary);
        printf("\nEmployee Age:%d",employee[i].age);
        printf("\nEmployee phn_no:%d",employee[i].phn_no);
    }
    return 0;
}
