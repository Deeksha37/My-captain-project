//# include<stdio.h>
//# include<conio.h>
//# include<string.h>
//
//struct org
//{
//    char name[30];
//    int ph_no,salary,age;
//
//};
//
//void main()
//{
//    struct org employee[20];
//    int n,i;
//    clrscr();
//    printf("\n Enter the number of employeed in your organization (<=20):");
//    scanf("%d",&n);
//
//    for(i=0;i<n;i++)
//    {
//        printf("\n Enter Person %d\n Name:",i+1);
//        scanf("%s",&employee[i].name);
//
//        printf("\n Employee ph_no:");
//        scanf("%d",&employee[i].ph_no);
//
//        printf("\n Employee Salary:");
//        scanf("%d",&employee[i].salary);
//
//        printf("\n Employee Age:");
//        scanf("%d",&employee[i].age);
//
//    }
//
//    printf("\n Employee Information\n");
//    for(i=0;i<n;i++)
//    {
//        printf("\nPerson %d\n Name: %s",i+1,employee[i].name);
//        printf("\nEmployee ph_no: %d",employee[i].ph_no);
//        printf("\nEmployee Salary: %d",employee[i].salary);
//        printf("\nEmployee Age: %d",employee[i].age);
//}
//getch();
//}



//# include<stdio.h>
//# include<stdlib.h>
//
//typedef struct
//{
//    char name[30];
//    int ph_no;
//    int salary;
//    int age;
//}
//
//Employee;
//
//int main()
//{
//    int n=2,i;
//
//    Employee employees[n];
//
//    printf("Enter %d Employee Details \n\n",n);
//    for(i=0;i<n;i++)
//        {
//            printf("Employee %d:- \n",i+1);
//
//            printf("Name:");
//            scanf("%s",employees[i].name);
//
//            printf("ph_no:");
//            scanf("%d",&employees[i].ph_no);
//
//            printf("Salary:");
//            scanf("%d",&employees[i].salary);
//
//            printf("Age:");
//            scanf("%d",&employees[i].age);
//
//            printf("\n");
//        }
//
//        printf("Displaying employees details \n");
//        for(i=0;i<n;i++)
//        {
//            printf("Name\t:");
//            printf("%s\n",employees[i].name);
//
//            printf("Ph_no \t:");
//            printf("%d\n",employees[i].ph_no);
//
//            printf("Salary\t:");
//            printf("%d\n",employees[i].salary);
//
//            printf("Age\t:");
//            printf("%d\n",employees[i].age);
//        }
//        return 0;
//         }


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
