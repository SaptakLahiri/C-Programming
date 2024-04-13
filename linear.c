#include<stdio.h>
int main() {
    
    int size;
    printf("Enter the size of your arr:");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of your arr:");
    for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
    }

    printf("Your arr is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    int elem;
    printf("Enter the element you want to search:");
    scanf("%d",&elem);
    
    for(int i=0;i<size;i++){
        if(arr[i]==elem){
            printf("Position of element %d is at %d index" , elem ,i);
        }
    }
    

    return 0;
}
