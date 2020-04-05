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
  fp(i,1,T)
  {
    int n;
    cin >> n;
    vector<pair<int,pair<int,int>>> v;
    int ans[n];
    f(i,n)
        ans[i]=-1;
    f(i,n)
    {
        int st,ed;
        cin >> st >> ed;
        v.pb({st,{ed,i}});
    }   
    sort(all(v));
    int flg=0;
    f(i,n)
    {
      if(ans[v[i].S.S]==-1)
        ans[v[i].S.S]=0;
      fp(j,i+1,n-1)
      {
       if(v[j].F<v[i].S.F)
       {
          if(ans[v[j].S.S]!=-1 && ans[v[j].S.S]!=(1-ans[v[i].S.S]))
             {
               flg=1;break;
             }
           else
            ans[v[j].S.S]=(1-ans[v[i].S.S]);
       }
       else
        break;
      }
      if(flg==1)
        break;
    }
    if(flg==1)
        {
          printf("Case #%d: IMPOSSIBLE\n",i);
        }
    else
    {
     printf("Case #%d: ",i);
     f(i,n)
     {
       if(ans[i]==0)
        printf("C");
       else
        printf("J");
     }
     printf("\n");
    }
  }
  return 0;
}
