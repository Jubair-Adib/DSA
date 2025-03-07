//59
//59
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int q,c=0;
        cin>>q;
        for(int j=0;j<n;j++){
            if(a[j]==q){
                cout<<1<<endl;
                c=1;
                break;
            }
        }
        if(c==0) cout<<0<<endl;
    }
    return 0;
}
