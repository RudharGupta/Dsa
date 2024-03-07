#include<stdio.h>
struct student{
    int rollnumber;
    char name[10];
    char branch[10];
    float marks;
};
void main(){
    int n,i;
    printf("enter size  of array : ");
    scanf("%d",&n);
    struct student list[n];
for(i=0;i<n;i++){
    printf("Enter roll number of student  %d\n ",i+1);
    scanf("%d", &list[i].rollnumber);
    printf("Enter Name of student  %d\n ",i+1);
    scanf("%s", &list[i].name);
    printf("\n Enter Branch of student  %d\n ",i+1);
    scanf("%s", &list[i].branch);
    printf("Enter Marks of student %d\n", i + 1);
    scanf("%f", &list[i].marks);
}
printf("STUDENT RECORDS ARE \n");
for(i = 0 ; i < n ; i ++) {
        printf("%15d %15s %15s %15f \n", list[i].rollnumber, list[i].name, list[i].branch, list[i].marks);
    }
}