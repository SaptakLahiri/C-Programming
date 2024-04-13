#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the number of rows in arr:");
    scanf("%d",&x);
    printf("Enter the number of columns in arr:");
    scanf("%d",&y);
    int arr[x][y];

    printf("Enter the elements of your arr:");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Your arr is:");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d",arr[i][j]);
        }
    }
    
    int elem;
    printf("Enter the element you want to search:");
    scanf("%d",&elem);
    
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
        if(arr[i][j] == elem){
            printf(" Position of element %d is at row %d & at column %d",elem,i,j);
        }
        
    }
}
    return 0;
}