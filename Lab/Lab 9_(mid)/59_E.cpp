//59
//59
#include<bits/stdc++.h>
using namespace std;

void rcom(int arr[], int length, int size){
    if(length==size){
        for(int i=0;i<size;i++){
            if(i!=0) cout<<" ";
            cout<<arr[i]; 
        }
        cout<<endl;
        return;
    }
    for(int i=4;i>=0;i--){
        if(length%2==i%2) continue;    
        arr[length]=i;
        rcom(arr,length+1,size);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    rcom(arr,0,n);
    return 0;
}