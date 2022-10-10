#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // Reading matrix size
    short m, n;
    printf("Rows: ");
    scanf("%hi", &m);
    printf("Cols: ");
    scanf("%hi", &n);
    short zRows[m], zCols[n];

    // Checking for validity
    if (m <= 0 || n <= 0){
        printf("Invalid size\n");
        return 1;
    }

    // Defining and reading the matrix
    int matrix[m][n];
    printf("Enter the matrix:\n");
    for (int i = 0; i < m; i++){
        zRows[i] = 0;
        for (int j = 0; j < n; j++){
            zCols[j] = 0;
            scanf("%i", &matrix[i][j]);
        }
    }

    // Finding rows and columns with zeroed elemtents
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == 0){
                zRows[i] = 1;
                zCols[j] = 1;
            }

    // Setting elements zero and printing results
    printf("Modified matrix:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (zRows[i] == 1 || zCols[j] == 1) matrix[i][j] = 0;            
            printf("%5i", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
