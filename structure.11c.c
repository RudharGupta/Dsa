#include<stdio.h>
struct student{
    int rollnumber;
    char name[15];
    char branch [12];
    float marks;
};
int main()
{
    struct student s1;
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
    printf("Name is %s \n",s1.branch);
    printf("Name is %f\n",s1.marks);
    return 0;
}