//Time Complexity - O(m*n)
//Space Complexity - O(1)
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> setMatrixZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    bool col0 = 1;
    for (int i = 0; i < m; i++) 
    {
        if (matrix[i][0] == 0) 
            col0 = 0;
        for (int j = 1; j < n; j++)
            if (matrix[i][j] == 0) 
                matrix[i][0] = matrix[0][j] = 0;
    }
    for (int i = m - 1; i >= 0; i--) 
    {
        for (int j = n - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0) 
            matrix[i][0] = 0;
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