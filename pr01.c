# include<stdio.h>

int main(){
    int arr[10];

    int *ptr = arr;
    ptr = ptr+2;
    if(ptr== &arr[2]){
        printf("These point to the same address\n");
    }
    else{
        printf("These point do not point to the same address\n");

    } 
    return 0;
}