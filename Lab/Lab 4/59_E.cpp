#include <bits/stdc++.h>

using namespace std;

void tripleRecursion(int n, int m, int k) {
    int a[n][n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) a[i][j]=m+k*i;
            else if(i>j) a[i][j]=a[i-1][j]-1;
            else if(i<j) a[i][j]=a[i][j-1]-1;

            if(j==0) cout<<a[i][j];
            else cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}

int main() {
    int n;
    int m;
    int k;
    cin >> n >> m >> k;
    tripleRecursion(n, m, k);
    return 0;
}
