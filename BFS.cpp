

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


vector<int>v[10];

int mark[10];



void BFS(int source)
{
    queue<int>q;

    q.push(source);
    mark[source] = 1;

    while(!q.empty())
    {
        int cur = q.front();

        q.pop();

        cout << cur << endl;

        for(int i=0; i<v[cur].size(); i++)
        {
            if(mark[v[cur][i]]==0)
            {
                q.push(v[cur][i]);
                mark[v[cur][i]] = 1;
            }
        }


    }

    return;


}

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

//
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<v[i].size(); j++)
//            cout << v[i][j] << " ";
//
//            cout << "\n";
//
//    }

    BFS(0);



    return 0;
}

