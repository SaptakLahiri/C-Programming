#include<stdio.h>
int main(){
    int arr[] = {1,3,9,17,18,90};
    int size = sizeof(arr)/sizeof(arr[1]);
    int high = size-1,low = 0;
    int target = 88;
    int found = 0;
    int targetIdx=-1;
    while(high>=low){
        int mid = (high+low)/2;
        if(target == arr[mid]){
            found = 1;
            targetIdx = mid;
            break;
        }
        else if(target>arr[mid]) low = mid+1;
        else high = mid-1;
    }
    if(found==0){
            printf("Element not found");
    }  
    else{
            printf("Element found at index : %d",targetIdx);
    }
    return 0;
}