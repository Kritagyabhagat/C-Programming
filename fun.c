#include<stdio.h>
int sum(int, int);
int main()
{
    int a,b , result;
    printf("Enter two number:");
    scanf("%d %d", &a,&b);
    
    result= sum(a,b);
    printf("sum:%d", result);

    return 0;


}

int sum(int a, int b){
    
    return a+b;


    


}