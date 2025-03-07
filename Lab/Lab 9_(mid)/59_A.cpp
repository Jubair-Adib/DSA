//59
//59
//59
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct linkedlist{
    int size=0;
    struct node{
        node *next;
        int val;
    };
    node* head=NULL;
    node* tail=NULL;

    void InsertFirst(int x){
        size++;
        node* a=(node*)malloc(sizeof(node));
        a->next=NULL;
        a->val=x;
        if(head==NULL){
            head=a;
            tail=a;
        }else{
            a->next=head;
            head=a;
        }
    }

    void InsertLast(int x){
        size++;
        node* a=(node*)malloc(sizeof(node));
        a->next=NULL;
        a->val=x;
        if(tail==NULL){
            head=a;
            tail=a;
        }else{
            tail->next=a;
            tail=a;
        }
    }

    void DeleteFirst(){
        size--;
        if(head==NULL) return;

        if (head==tail){
            int x=head->val;
            head=NULL;
            tail=NULL;
        }else{
            int x=head->val;
            head=head->next;
        }
    }

    void DeleteLast(){
        size--;
        if(head==NULL){
            return;
        }else if(head==tail){
            head=tail=NULL;
        }else{
            node *current=head;
            while (current->next!=tail){
                current=current->next;
            }
            tail=current;
            current->next=NULL;
        }
    }

    int prothom(){
        return head->val;
    }

    void print(){
        node* p=head;
        while(p!=NULL){
            cout<<p->val<<endl;
            p=p->next;
        }
    }

    int SIZE(){
        return size;
    }
};

linkedlist merge_lls(linkedlist merge, linkedlist ll){
    linkedlist notun;
    while(merge.SIZE()>0 && ll.SIZE()>0){
        if(merge.prothom()>ll.prothom()){
            notun.InsertLast(ll.prothom());
            ll.DeleteFirst();
        }else{
            notun.InsertLast(merge.prothom());
            merge.DeleteFirst();
        }
    }
    while(merge.SIZE()>0){
        notun.InsertLast(merge.prothom());
        merge.DeleteFirst();
    }
    while(ll.SIZE()>0){
        notun.InsertLast(ll.prothom());
        ll.DeleteFirst();
    }
    return notun;
}


int main(){
    int n;
    cin>>n;
    linkedlist merge;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        linkedlist ll;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            ll.InsertLast(x);
        }
        merge=merge_lls(merge,ll);
    }
    merge.print();
}

    