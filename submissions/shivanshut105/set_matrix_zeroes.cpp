// Time Complexity: O(n*m)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) begin(v), end(v)
#define dbg(x) cerr << #x << " " << x << endl;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<vector<int>> vec(n, vector<int> (m));
    vector<int> row;
    vector<int> col;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin>>vec[i][j];
            if(vec[i][j]==0){ 
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    vector<int> temp(m, 0);

    // for rows
    for (int i = 0; i < row.size(); ++i)
    {
        vec[row[i]]=temp;
    }

    // for column
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < col.size(); ++j)
        {
            vec[i][col[j]] = 0;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout<<vec[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
