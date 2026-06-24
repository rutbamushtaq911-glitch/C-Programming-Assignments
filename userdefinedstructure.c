#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee e1 ;
    printf(" enter employee code");
    scanf("%d",&e1.code);
    printf("enter salary");
    scanf("%f",&e1.salary);
    printf(" enter name");
    scanf("%s",&e1.name);
    printf("%d %f %s",e1.code,e1.salary,e1.name);
    return 0;





}