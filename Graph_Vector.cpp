
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


vector<int>v[10];



int main()
{

    int n , m , x , y;

    cin >> n >> m;

    /// n nodes & m vertices


    for(int i=1; i<=m; i++)
    {
        cin >> x >> y;

        v[x].pb(y);

    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<v[i].size(); j++)
            cout << v[i][j] << " ";

            cout << "\n";

    }



    return 0;
}

