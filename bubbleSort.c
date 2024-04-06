#include<stdio.h>

void bubblesort(int arr[], int size){
    int i,j,temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;          
            }
        }
    }
}

void inputArr(int *arr, int size){
    printf("\nEnter elements of array : ");   
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

void printArr(int *arr, int size){
    printf("\nYour array is : ");   
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter the size of your arr:");
    scanf("%d",&size);
    int arr[size];
    inputArr(arr,size);
    printArr(arr,size);
    bubblesort(arr,size);
    printf("\nAfter sorting :");
    printArr(arr,size);
    return 0;
}
