#include<stdio.h>
int sum(int *,int *);
int sum(int *a,int*b){
    *a = 6;
    return *a+*b;}
int main(){
    int x =1; int y =6;
    printf(" the value of sum is %d", sum(&x,&y));
    printf("the value of x is %d",x);
    return 0;}


