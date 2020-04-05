/*
 Ashutosh Singh
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
// #include<boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define mod 1000000007
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)
#define fp(i,k,n) for(int i=k;i<=n;i++)
#define fr(i,k,n) for(int i=k;i>=n;i--)
#define pb push_back
#define F first
#define S second
#define all(a) a.begin(),a.end()
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

signed main()
{
  FAST
  int T=1;
  cin >> T;
  for(int i=1;i<=T;i++)
  {
    int n;
    cin >> n;
    int m[n+1][n+1];
    int r=0,c=0,t=0;
    fp(i,1,n)
    {
    fp(j,1,n)
        {cin >> m[i][j];
        if(i==j)
          t+=m[i][j];}
    }
    map<pair<int,int>,int> mr,mc;
    fp(i,1,n)
    {
         fp(j,1,n)
         {
            mr[{i,m[i][j]}]++;
            if(mr[{i,m[i][j]}]>1)
            {
                r++;break;
            }
         }
     }
     fp(j,1,n)
     {
        fp(i,1,n)
        {
          mc[{j,m[i][j]}]++;
          if(mc[{j,m[i][j]}]>1)
            {
                c++;break;
            }
        }
     }  
     printf("Case #%d: %d %d %d\n",i,t,r,c);
  }
  return 0;
}
