//59
#include <iostream>
using namespace std;

struct ll
{

    struct node
    {
        node *next;
        int val;
    };
    node *head=NULL;
    node *tail=NULL;

    void insert_last(int x)
    {
        //insert x at last
        //Your code starts here #001
        node *a=(node*)malloc(sizeof(node));
        a->next=NULL;
        a->val=x;

        if(tail==NULL){
            head=a;
            tail=a;
        }
        else{
            tail->next=a;
            tail=a;
        }
        
        //Your code ends here #001
    }

    void sort(){
        //Sorts the linked list

        //Your code starts here #002
        node *a=head;
        while(a!=NULL){
            node *b=a->next;
            while(b!=NULL){
                if(a->val>b->val){
                    int t=a->val;
                    a->val=b->val;
                    b->val=t;
                }
                b=b->next;
            }
            a=a->next;
        }
        
        //Your code ends here #002
    }

    void print()
    {
        //prints elements from head to tail
        //Your code starts here #003
        node *a=head;
        while(a){
            //cout<<(a->number)<<" ";
            //if(a!=head) cout<<" ";
            printf("%d\n",a->val);
            a=a->next;
        }
        
        //Your code ends here #003
    }
};


int main()
{

    //Your code starts here #004
    int n;
    cin>>n;
    ll s;
    for(int t=0;t<n;t++) {int a; cin>>a; s.insert_last(a);}
    s.sort();
    s.print();  
    //Your code ends here #004
    return 0;


}
