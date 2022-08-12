#include <bits/stdc++.h>
#define input freopen("D:/inputoutput/input.txt", "r", stdin);
#define output freopen("D:/inputoutput/output.txt", "w",stdout);
using namespace std;
#define ll long long
#define nl endl
#define sort(a) sort(a.begin(),a.end())
#define rep(i,a,b) for (ll i = a; i < b; i++)


    void solve(){
        ll n;
        cin>>n;
        if(n==0 || n==1){
                cout<<"Not Prime";
                return;
            }
        rep(i,2,n){
            if(n%(i*i)==0){
                cout<<"Not Prime";
                return;
            }
        }
        cout<<"Prime";
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