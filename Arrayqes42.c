// write a fuction to count the number of odd number in an arry
# include<stdio.h>

int countOdd(int arr[], int n);

int main()
{   int arr[]= {1,2,3,4,5,6,7,8,9,10};
    printf("%d", countOdd(arr, 10));
    return 0;
    

}

// Defination of function
int countOdd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 !=0){ // odd cheak
            count++;

        }
    }

    return count;

}