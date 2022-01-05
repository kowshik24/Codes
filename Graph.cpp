#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


int a[10][10];


int main()
{

    int n , m , x , y;

    cin >> n >> m;

    /// n nodes & m vertices


    for(int i=1; i<=m; i++)
    {
        cin >> x >> y;


        a[x][y] = 1;
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

