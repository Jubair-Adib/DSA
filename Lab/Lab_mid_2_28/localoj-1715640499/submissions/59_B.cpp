//59
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(b[j]>b[j+1]){
                swap(b[j],b[j+1]);
                swap(a[j],a[j+1]);
                /*int temp;
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;*/
            }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<endl;
    return 0;
}