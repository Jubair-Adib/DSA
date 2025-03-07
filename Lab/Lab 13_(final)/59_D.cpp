//59
//59
//59
//59
//59
//59
//59
#include<iostream>
using namespace std;
#define ll long long int
void f(int a[],int l,int sz){
    if(l==sz){
        for(int i=0;i<sz;i++){
            if(i!=sz-1) cout<<a[i]<<" ";
            else cout<<a[i]<<endl;
        }
        return;
    }
    for(int i=0;i<=4;i++){
        if(l%2==i%2){
            a[l]=i;
            f(a,l+1,sz);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[]={0};
    f(a,0,n);
    return 0;
}
