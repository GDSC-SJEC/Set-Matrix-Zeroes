#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
    int n=matrix.size(),m=matrix[n-1].size();
    bool row[n],col[m];
    for(int i=0;i<n;i++)
    {
        row[i]=false;
    }
    for(int i=0;i<m;i++)
    {
        col[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=true;
                col[j]=true;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i]==true || col[j]==true)
            {
                matrix[i][j]=0;
            }
        }
    }
}
int main()
{
    vector<vector<int>>matrix;
    int m,n;
    cout<<"Give values of no. of rows and columns!"<<endl;
    cin>>m>>n;
    cout<<"Enter the matrix"<<endl;
    for(int i=0;i<m;i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        matrix.push_back(v);
    }
    setZeroes(matrix);
    cout<<"The latest matrix is"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//timecomplexity=O(n*m)
//space complexity=O(n+m)