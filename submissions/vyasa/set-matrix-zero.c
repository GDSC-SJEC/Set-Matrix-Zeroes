#include <stdio.h>
#include <stdlib.h>

int m, n;
void setMatrixZero(int matrix[m][n]){
    short zRows[m], zCols[n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
                zRows[i] = 0;
                zCols[j] = 0;
            }
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
            if (matrix[i][j] == 0){
                zRows[i] = 1;
                zCols[j] = 1;
            }
        }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (zRows[i] == 1 || zCols[j] == 1) matrix[i][j] = 0;
}

int main(){
    
    // Reading matrix size
    printf("Rows: ");
    scanf("%i", &m);
    printf("Cols: ");
    scanf("%i", &n);

    // Checking for validity
    if (m <= 0 || n <= 0){
        printf("Invalid size\n");
        return 1;
    }

    // Defining and reading the matrix
    int matrix[m][n];
    printf("Enter the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%i", &matrix[i][j]);

    // Setting elements zero and printing results
    setMatrixZero(matrix);
    printf("Modified matrix:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            printf("%5i", matrix[i][j]);
        printf("\n");
    }

    // Closing the program
    return 0;
}