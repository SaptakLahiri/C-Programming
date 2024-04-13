#include<stdio.h>

void scanArr(int arr[],int size){
   printf("\n enter your elements of array :");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
}

void printArr(int arr[],int size){
   printf("\n\n your array :");
    for(int i = 0; i < size; i++){
        printf(" %d ",arr[i]);
    }
}

void insertionSort(int *arr, int size){
   for(int i = 0; i < size; i++){
    int j = i;
    while(arr[j] < arr[j-1] && j>=1){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
   }
}
int main(){
    int size;
    printf("enter arr size :");
    scanf("%d",&size);
    int arr[size];
    scanArr(arr,size);
    printArr(arr,size);
    insertionSort(arr,size);
    printArr(arr,size);
    return 0;
    }