#include<bits/stdc++.h>
using namespace std;
int kbuild(int x){
    int k=1;
    for(int i=1;i<=x;i++){
        if(i%2==1) k=k*3;
        else k=k*2;
    }
    return k;
}
int main(){
    int n,c,z=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1) z=z*3;
        else z=z*2;
    }
    vector<vector<int>> a(z);
    for(int j=0;j<n;j++){
            int i=n-j;
            if(j%2==0){
                c=0;
                while(c!=z){
                    for(int k=0;k<kbuild(i)/3;k++){
                        a[c].push_back(4);
                        c++;
                    }
                    for(int k=kbuild(i)/3;k<(2*kbuild(i)/3);k++){
                        a[c].push_back(2);
                        c++;
                    }
                    for(int k=(2*kbuild(i)/3);k<kbuild(i);k++){
                        a[c].push_back(0);
                        c++;
                    }
                }
            }
            else{
                c=0;
                while(c!=z){
                    for(int k=0;k<kbuild(i)/2;k++){
                        a[c].push_back(3);
                        c++;
                    }
                    for(int k=kbuild(i)/2;k<kbuild(i);k++){
                        a[c].push_back(1);
                        c++;
                    }
                }
            }
    }
    for(int i=0;i<z;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
