#include<stdio.h>
int change(int* a);
int change(int* a){
    *a = 100;
}
int main(){
   int b =10;
    change(&b);
    printf("%d",b);
return 0;
}
