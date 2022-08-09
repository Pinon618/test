#include <bits/stdc++.h>
#define input freopen("D:/inputoutput/input.txt", "r", stdin);
#define output freopen("D:/inputoutput/aa.txt", "w",stdout);
using namespace std;
#define ll long long
#define nl endl
#define sort(a) sort(a.begin(),a.end())
#define rep(i,a,b) for (ll i = a; i < b; ++i)


    void solve(){
        ll n;
        cin>>n;
        vector<ll > a(n);
        rep(i,0,n) cin>>a[i];
        sort(a);

        rep (i,0,n-2){
            if(a[i]+a[i+1]>a[i+2]) 
                {cout<<"YES"; 
            return;}
        }
        cout<<"NO";
    }

int main()
{
    #ifndef ONLINE_JUDGE
  input; output;
#endif
   int q=1;
   // cin>>q;
   while(q--)
    solve();
    return 0;
}