//  Set Matrix Zeroes Coding Challenge
//  Given an m x n integer matrix, if an element is 0, set its entire row and column to 0's.

//  Time Complexity= O(m*n)
//  Space Complexity= O(1)

#include <stdio.h>

void setMatZero(int matrix[20][20],int rows, int cols){
    int fRow,fCol;
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0]==0)
        {
           fCol=9;
        }
        
    }
    for (int j = 0; j < rows; j++)
    {
        if (matrix[0][j]==0)
        {
           fRow=9;
        }
        
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j]==0)
            {
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
            
        }
        
    }
    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
            
        }
        
    }
    
    if (fRow==9)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[0][j]=0;
        }
        
    }
    if (fCol==9)
    {
        for (int i = 0; i < rows; i++)
        {
            matrix[i][0]=0;
        }
        
    }

    
    //answer
    printf("Answer matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t",matrix[i][j]);
            
        }
        printf("\n");
    }
    
    
}

int main() {
    int mat[20][20],m,n;
    printf("Enter your matrix's rows and column no.\n");
    scanf("%d %d",&m,&n);
    printf("Enter your matrix's element\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    printf("Your Matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    } 
    setMatZero(mat,m,n);
    return 0;

}