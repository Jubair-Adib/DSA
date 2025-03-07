//59
//59
//59
//59
#include <bits/stdc++.h>
using namespace std;

struct ll{
    struct node{
        node *next;
        int val;
    };
    node *head=0;
    node *tail=0;

    void insert_last(int x){
        node *a=new node;
        a->next=NULL;
        a->val=x;
        if(tail){
            tail->next=a;
            tail=a;
        }
        else{
            head=a;
            tail=a;
        }
    }

    void print(){
        node* p=head;
        while(p){
            printf("%d\n",p->val);
            p=p->next;
        }
    }

};

int main(){
    int n;
    cin>>n;
    ll ms;
    while(n--){
        int r;
        cin>>r;
        ms.insert_last(r);
    }
    ms.print();
    return 0;
}
