//Space Complexity - O(m+n)
//Time Complexity - O(m*n)
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> setMatrixZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    vector<bool> rows(m, 0), cols(n, 0);

    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == 0) //finding zeroes in matrix
                rows[i] = 1, cols[j] = 1;
            
    for (int i = 0; i < m; i++)
    {
        if (rows[i]) //setting row values to zero
            for (int j = 0; j < n; j++)
                matrix[i][j] = 0;
         
        else //setting column values to zero
            for (int j = 0; j < n; j++) 
                if (cols[j])
                    matrix[i][j] = 0;
    }
    return matrix;
}

int main()
{
    vector<vector<int>> matrix;
    int m, n;
    cout<<"Enter no. of rows: ";
    cin>> m;
    cout<<"Enter no. of columns: ";
    cin>> n;

    cout<<"Enter the matrix: \n";
    for(int i=0; i<m; i++)
    {
        vector<int> row(n);
        for(int j=0; j<n; j++)
        {
            cin>>row[j];
        }
        matrix.push_back(row);
    }
        
    matrix = setMatrixZeroes(matrix);

    cout<<"\nOutput Matrix\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n; j++)
            cout<< matrix[i][j]<<" ";
        cout<<endl;
    }
}