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
#define RSORT(v)        sort(v.begin(),v.end(),greater<ll>())
#define REV(v)          reverse(v.begin(),v.end())





#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;


#define Yes cout << "YES" << endl;
#define No cout << "NO" << endl;

#define r0 return 0


#define FASTIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);



///..................Sort by second element in a pair in decending order............. ///
bool SortbySecDesc(const pair<long long,long long > &a, const pair<long long,long long > &b)
{

    return a.second>b.second;

    /*

    2 89
    1 20
    9 11
    5 10
    5 9
    4 7
    4 6

    */


}

///..................Sort by second element in a pair in increasing order............. ///
bool SortbySecInc(const pair<long long,long long > &a, const pair<long long,long long > &b)
{
    return a.second<b.second;

    /*

    4 6
    4 7
    5 9
    5 10
    9 11
    1 20
    2 89

    */
}



///.........................first element of pair in descending order..........................//////
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.first > b.first);

    /*

    9 11
    5 10
    5 9
    4 6
    4 7
    2 89
    1 20

    */
}




///..................................Binary Search in Pair(Pair er 1st element er upor binary search korbe)..................//////

struct compare
{
    bool operator()(const pair<int,int> & value, const int &key)
    {
        return (value.first<key);
    }

    bool operator()(const int &key, const pair<int,int> &value)
    {
        return (key<value.first);
    }
};



///.............................................................TEMPLATE................................................./////






/// Convert String to Int ////

int String_to_int(string s)
{

    stringstream geek(s);

    int ans = 0;

    geek >> ans;


    return ans;
}

/// string to int ///
int S_I(string s)
{

    return stoi(s);
}

/*
/// int to string ///
string I_S(int n)
{
    return atoi(n);
}
*/

/*
/// convert a string to long long , binary , hexadecimal ///

void convert(string num)
{
    cout << stoll(num,nulptr,10) << endl;

   //10->Decimal,2->Binary,8->Octal,16->Hexadecimal//

}

*/





//long long  Prime[3000000],nPrime;
//long long  mark[10000002];
//
//void seive()
//{
//
//    ll n = 1000000;
//
//
//	long long int i,j,limit=sqrt(1000000000000*1.0)+2;
//	mark[1]=1;
//	for(i=4; i<=n ;i+=2)
//	mark[i]=1;
//	Prime[nPrime++]=2;
//	for(i=3; i<=n; i+=2)
//	{
//		if(!mark[i])
//		{
//			Prime[nPrime++]=i;
//			if(i<=limit)
//			{
//				for(j=i*i; j<=n ;j+=i*2)
//				{
//					mark[j]=1;
//				}
//			}
//		}
//	}
//}



///std::cin.ingore() used for line of a string///



/// gcd and lcm code shortcut ////
ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b,a%b));
}

ll lcm(ll a, ll b)
{
    return (a * ( b /(gcd(a,b))));
}


bool check(string expr)
{

    stack<char> s;
    char x;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
                || expr[i] == '{')
        {

            s.push(expr[i]);
            continue;
        }


        if (s.empty())
            return false;

        switch (expr[i])
        {
        case ')':


            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':


            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':


            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return (s.empty());
}








bool iscycle(int src,vector<vector<ll>>&v,vector<bool>&mark,int parent)
{

    mark[src] = true;

    for(auto it:v[src])
    {
        if(it!=parent)
        {
            if(mark[it])
            {
                return true;
            }


            if(!mark[it] and iscycle(it,v,mark,src))
            {
                return true;
            }
        }
    }

    return false;


}



ll color[100005];

map<ll,bool>mark;


vector<ll>v[100005];

queue<ll>q;



bool bfs(ll source)
{

    mark.clear();
    MEM(color,-1);
    q.empty();




    mark[source] = true;

    color[source] = 1;


    q.push(source);

    bool f = 0;



    while(!q.empty())
    {
        ll kos = q.front();

        q.pop();

        for(int i=0; i<v[kos].size(); i++)
        {

            //cout << "source " << kos << endl;


           // cout << color[kos] << " " << color[v[kos][i]] << endl;

            if(!mark[v[kos][i]] and color[v[kos][i]]==-1)
            {
                q.push(v[kos][i]);

                mark[v[kos][i]] = true;

                if(color[kos]==0)
                {
                    color[v[kos][i]]=1;
                }
                else
                {
                    color[v[kos][i]] = 0;
                }
            }
            else if(color[v[kos][i]]!=color[kos])
            {
                continue;
            }
            else
            {
                f = 1;

            }
        }

    }

    if(f)
    {
        return false;
    }
    else
    {
        return true;
    }









}



int main()
{
    FASTIO;


    while(1)
    {



        ll n,m;

        cin >> n;


        if(n==0)
        {
            break;
        }

        cin >> m;




        for(int i=0; i<m; i++)
        {
            ll a, b;

            cin >> a >> b;

            v[a].pb(b);
            v[b].pb(a);
        }

        if(bfs(0))
        {
            cout << "BICOLORABLE." << endl;
           for(int i=0; i<n; i++)
           {
               v[i].clear();
           }

        }
        else
        {
            cout << "NOT BICOLORABLE." << endl;
             for(int i=0; i<n; i++)
           {
               v[i].clear();
           }


        }



    }




    return 0;
}
