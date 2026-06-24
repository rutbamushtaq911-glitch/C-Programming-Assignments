#include<stdio.h>
struct student{
    int rollno ;
    float marks;
    char name[50];
};
int main(){
    int i;
struct student s[5];
printf(" enter roll number");
for(i=0;i<5;i++){
    scanf("%d",&s[i].rollno);
}
printf("enter marks");
for(i=0;i<5;i++){
    scanf("%f",&s[i].marks);
}
printf(" enter name");
for(i=0;i<5;i++){
    scanf("%s",&s[i].name);
}
for(i=0;i<5;i++){
    printf("%d %f %s",s[i].rollno,s[i].marks,s[i].name);
}
return 0;
}