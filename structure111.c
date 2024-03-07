#include<stdio.h>
struct student{
    int rollnumber;
    char name[15];
    char branch [12];
    float marks;
};
int main()
{
    struct student s1,s2;
    printf("Enter Roll Number :");
    scanf("%d",&s1.rollnumber);
    printf("\nEnter Name : ");
    fflush(stdin);
    gets(s1.name);
    printf("\nEnter Branch : ");
    gets(s1.branch);
    printf("\nEnter Marks : ");
    scanf("%f",&s1.marks);
    printf("Roll number %d\n",s1.rollnumber);
    printf("Name is %s \n",s1.name);
    printf("Branch is %s \n",s1.branch);
    printf("Marks is %f\n",s1.marks);

    printf("Enter Roll Number Student 2 :");
    scanf("%d",&s2.rollnumber);
    printf("\nEnter Name of student 2: ");
    fflush(stdin);
    gets(s2.name);
    printf("\nEnter Branch of student 2: ");
    gets(s2.branch);
    printf("\nEnter Marks of student : ");
    scanf("%f",&s2.marks);
    printf("Roll number %d\n",s2.rollnumber);
    printf("Name is %s \n",s2.name);
    printf("Branch is %s \n",s2.branch);
    printf("Marks is %f\n",s2.marks);
    return 0;
}