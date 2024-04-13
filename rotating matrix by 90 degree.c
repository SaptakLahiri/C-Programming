#include <stdio.h>

#define MAX_SIZE 100

void rotateMatrix(int mat[MAX_SIZE][MAX_SIZE], int N) {
    for (int x = 0; x < N / 2; x++) {
        for (int y = x; y < N - x - 1; y++) {
            int temp = mat[x][y];
            mat[x][y] = mat[N - 1 - y][x];
            mat[N - 1 - y][x] = mat[N - 1 - x][N - 1 - y];
            mat[N - 1 - x][N - 1 - y] = mat[y][N - 1 - x];
            mat[y][N - 1 - x] = temp;
        }
    }
}

void displayMatrix(int mat[MAX_SIZE][MAX_SIZE], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &N);

    int mat[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Original Matrix:\n");
    displayMatrix(mat, N);

    rotateMatrix(mat, N);

    printf("Matrix after rotating 90 degrees clockwise:\n");
    displayMatrix(mat, N);

    return 0;
}