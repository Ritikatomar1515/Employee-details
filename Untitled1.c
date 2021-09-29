#include <stdio.h>

 
typedef struct{
    char name[30];
    int age;
    int phone_number;
    double salary;
} Employee;
 
int main()
{
    //number of employees
    int n=2;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++)
	{
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //Age
        printf("age : ");
        scanf("%d",&employees[i].age);
        
        // Phone NUmber 
        printf("%d" , &employees[i].phone_number);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for( i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("Phone Number \t:");
        printf("%d \n" , employees[i].phone_number);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
