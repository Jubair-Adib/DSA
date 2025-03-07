//59
//59
#include<bits/stdc++.h>
using namespace std;

struct TernaryTree{
    struct node{
        int val;
        node* left;
        node* mid;
        node* right;

    };
    node* root=NULL;

    void rootdeclare(int x) {
        root=CreateNode(x);
    }

    node* CreateNode(int x){
        node* newnode=(node*)malloc(sizeof(node));
        newnode->val=x;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->mid=NULL;
        return newnode;
    }

    node* FindNode(node* parent, int x) {
        if (parent==NULL) return NULL; 
        if (parent->val==x) return parent;
        node* f=FindNode(parent->left,x);
        if (f!=NULL) return f;
        node* ff=FindNode(parent->mid,x);
        if(ff!=NULL) return ff;
        return FindNode(parent->right,x);
    }

    void InsertValue(int type, int par, int x){
        node* rt=FindNode(root,par);
        if(type==0){
            if(rt->left==NULL){
                rt->left=CreateNode(x);
                return;
            }
        }else if(type==1){
            if(rt->mid==NULL){
                rt->mid=CreateNode(x);
                return;
            }
        }else{
            if(rt->right==NULL){
                rt->right=CreateNode(x);
                return;
            }
        }
    }

    void inOrderDFS(node* node) {
        if(node==NULL) return;
        inOrderDFS(node->left);
        inOrderDFS(node->mid);  
        cout<<node->val<<endl;
        inOrderDFS(node->right);
    }

    void in_order_traversal(){
        inOrderDFS(root);
    }
};



int main(){
    int rr;
    cin>>rr;
    TernaryTree tt;
    tt.rootdeclare(rr);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int type,par,x;
        cin>>type>>par>>x;
        tt.InsertValue(type,par,x);
    }
    tt.in_order_traversal();
}
