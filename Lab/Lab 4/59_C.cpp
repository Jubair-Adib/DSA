#include<bits/stdc++.h>
using namespace std;

struct Adib{
    stack <int> a,b;
    void E(int x){
        a.push(x);
    }
    void D(){
        if(b.empty()){
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
        }
        if(!b.empty()){
            b.pop();
        }
    }
    void P(){
        if(b.empty()){
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
        }
        if(!b.empty()){
            cout<<b.top()<<"\n";
        }
    }
};

int main() {
    int t;
    cin>>t;
    Adib q;
    while(t--){
        int type,x;
        cin>>type;

        if(type==1){
            cin>>x;
            q.E(x);
        }
        else if(type==2){
            q.D();
        }
        else if(type==3){
            q.P();
        }
    }
    return 0;
}
