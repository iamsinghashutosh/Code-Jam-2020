/*
 * 	How to be brave
 * 	How can I love when I am afraid to fall...
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
    string s;
    cin >> s;
    int cnt=0;
    string ans;
    ans="";
    f(i,s.length())
    {
        while(cnt!=(s[i]-'0'))
        {
         if(cnt>(s[i]-'0'))
         {
           ans+=")";
           cnt--;
         }
         if(cnt<(s[i]-'0'))
         {
          ans+="(";
          cnt++;
         }
        }
        ans+=s[i];
    }
    while(cnt!=0)
    {
     ans+=")";
           cnt--;
         
    }
    cout << "Case #" << i << ": " << ans << '\n';
  }
  return 0;
}
