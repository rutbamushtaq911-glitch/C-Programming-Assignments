#include<stdio.h>
int main(){
int i,n;
float sum;
float j;
sum = 0.0;
printf(" enter the number ");
scanf("%d",&n);
for(i=2;i<=n;i++){
j = 1.0/i;
sum = sum +j;}
printf(" the sum is %.3f",sum);
return 0;}