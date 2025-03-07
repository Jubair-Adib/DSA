#include <iostream>
using namespace std;
#define ll long long int
#define el "\n"
#define sp " "

int main(){
    string s;
    cin>>s;
    char c;
    ll counter[26]={0};
    for (ll i=0;i<s.size();i++) counter[s[i]-'a']++;
    for (ll i=0;i<26;i++){
        for (ll j=0;j<counter[i];j++){ c='a'+i; cout<<c;}
    }
    cout<<el;
    return 0;
}
