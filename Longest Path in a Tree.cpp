

/** Seek God..Trust God..Praise God..**/

#include<bits/stdc++.h>
using namespace std;


#define fRead(x)        freopen("x.txt","r",stdin)
#define fWrite(x)       freopen ("x.txt","w",stdout)

#define mt              make_tuple
#define ld              long double
#define ll              long long
#define ull             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define INF             2e16
#define PI              acos(-1.0)
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define endl            "\n";

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define SQR(a)          ((a)*(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))

#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())


#define FASTIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);




///..................Sort by second element in a pair in decending order............. ///
bool SortbySecDesc(const pair<long long,long long > &a, const pair<long long,long long > &b)
{
    return a.second>b.second;
}

///.........................first element of pair in descending order..........................//////
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}



///.............................................................TEMPLATE................................................./////



/*
long long  Prime[3000000],nPrime;
long long  mark[10000002];

void seive(long long int n)
{
	long long int i,j,limit=sqrt(n*1.0)+2;
	mark[1]=1;
	for(i=4; i<=n ;i+=2)
	mark[i]=1;
	Prime[nPrime++]=2;
	for(i=3; i<=n; i+=2)
	{
		if(!mark[i])
		{
			Prime[nPrime++]=i;
			if(i<=limit)
			{
				for(j=i*i; j<=n ;j+=i*2)
				{
					mark[j]=1;
				}
			}
		}
	}
}
*/


ll a , b , n;
map<ll,ll>dis;




bool mark[10005];

vector<ll>v[10005];


queue<ll>q;


void bfs(int s)
{




    q.push(s);
    mark[s]=1;
    //dis[s] = 1;

    while(!q.empty())
    {
        int fr = q.front();

        q.pop();




       // cout << fr << endl;

        for(int i=0; i<v[fr].size(); i++)
        {


            if(mark[v[fr][i]] == 0)
            {
                mark[v[fr][i]] = 1;
                q.push(v[fr][i]);

               // cout << v[fr][i] << endl;


                //cout << "dis " << dis[fr] << endl;
                //cout << "dis 1 " << dis[fr] << endl;


                dis[v[fr][i]] = dis[fr] + 1;

                //cout << "after " << dis[fr][i] << endl;

            }
        }





    }


}




int main()
{
    FASTIO;

    cin >> n;

    for(int i=0; i<n-1; i++)
    {

        cin >> a >> b;

        v[a].pb(b);
        v[b].pb(a);
    }

    bfs(1);


    ll ans = 0;


    ll pos = 0;


    for(auto it:dis)
    {

        //cout << it.second << endl;

        if(it.second>=ans)
        {
            ans = it.second;
            pos = it.first;
        }
    }

    dis.clear();
    MEM(mark,0);
    q.empty();

    bfs(pos);




    ll fin = 0;

    for(auto it:dis)
    {
        fin = max(fin,it.second);
    }

    cout << fin << endl;








    return 0;
}
