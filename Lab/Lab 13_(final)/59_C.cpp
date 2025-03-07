//59
//59
//59
//59
//59
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int q,c=0;
        cin>>q;
        if(a[n-1]<=q) cout<<n<<endl;
        else if(q<a[0]) cout<<0<<endl; 
        else{
            int f=0;
            int l=n-1;
            int m=(f+l)/2;
            while(f<=l && 0<=f && l<=n-1){
                m=(f+l)/2;
                if(a[m]<=q && q<a[m+1]){
             	    cout<<m+1<<endl;
             	    break;
            	}
            	else if(a[m]<=q) f=m+1;
            	else if(q<a[m]) l=m-1;
            }
        }
    }
    return 0;
}
