#include<stdio.h>
int sum();

void main(){
    int result;
    result=sum();
    printf("Sum of two number: %d", result);




}
int sum(){
    int a,b;
    printf("\nEnter two number:");
    scanf("%d %d",  &a,&b);
    return a+b;


}