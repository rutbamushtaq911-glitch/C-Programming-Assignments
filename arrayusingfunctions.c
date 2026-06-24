#include<stdio.h>
int search(int arr[],int n,int key){
    for(int i=0;i <n;i++){
        if(arr[i]==key){
            return i;
        }
        else{
            return -1;
        }
    }
}
int main(){
    int n;
    printf(" enter number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key ;
    printf(" enter value to be found");
    scanf("%d",&key);
   int c = search(arr,n,key);
   printf("%d",c);
}