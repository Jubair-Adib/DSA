//59
//59
//59
//59
#include<iostream>
using namespace std;
#define ll long long int
#define endline "\n"
struct singly_linked_list{

    ll linked_list_size=0;

    struct node{
        node *next_pointer;
        ll number;
    };

    node *head=NULL;
    node *tail=NULL;

    ll show_linked_list_size(){
        return linked_list_size;
    }

    void print_linked_list(){
        node *a=head;
        ll x=linked_list_size;
        while(a){
            //cout<<(a->number)<<" ";
            //if(a!=head) cout<<" ";
            printf("%d\n",a->number);
            a=a->next_pointer;
        }
    }

    void insert_first(ll x){
        linked_list_size++;

        node *a=(node*)malloc(sizeof(node));
        a->next_pointer=NULL;
        a->number=x;

        if(head==NULL){
            head=a;
            tail=a;
        }
        else{
            a->next_pointer=head;
            head=a;
        }
    }

    void insert_last(ll x){
        linked_list_size++;

        node *a=(node*)malloc(sizeof(node));
        a->next_pointer=NULL;
        a->number=x;

        if(tail==NULL){
            head=a;
            tail=a;
        }
        else{
            tail->next_pointer=a;
            tail=a;
        }
    }





};

int main(){
    int n,x,y;
    cin>>n;
    singly_linked_list s;
    for(int t=0;t<n;t++){
        cin>>x>>y;
        if(x==0) s.insert_first(y);
        else s.insert_last(y);
    }
    s.print_linked_list();
    return 0;
}
