#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define el "\n"
#define sp " "

int main(){
    ll n,x,y;
    cin>>n;
    vector<vector<ll>> a(1001,vector<ll>(1001));
    for (ll i=0;i<n;i++){
        cin>>x>>y;
        a[x][y]++;
    }
    for (ll i=0;i<1001;i++){
        for (ll j=0;j<1001;j++){
            for (ll k=0; k < a[i][j] ; k++){
                cout<<i<<sp<<j<<el;
            }
        }
    }
    return 0;
}
