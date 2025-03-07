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

    void delete_range(int l, int u){
        // deletes values within the range l and u, inclusive
        //Your code starts here #002
        node *current=head;
        node *previous=NULL;
        while(current!=NULL) {
            // Check if the current value is within the range [l, u]
            if(current->val>=l && current->val<=u){
                // If previous is NULL, it means we are deleting the head node
                if(previous==NULL){
                    head=current->next;
                    current=head;  // Move to the next node
                } 
                else{
                    // Otherwise, adjust the previous node to skip the current node
                    previous->next=current->next;
                    current=previous->next;  // Move to the next node
                }
            } 
            else{
                // Move previous and current pointers forward
                previous=current;
                current=current->next;
            }
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
        //cout<<endline;

        //Your code ends here #003
    }
};


int main()
{

    //Your code starts here #004

    int n,a,x,y;
    cin>>n;
    ll s;
    for(int t=0;t<n;t++) {cin>>a; s.insert_last(a);}
    cin>>x>>y;
    s.delete_range(x,y);
    s.print();

    //Your code ends here #004
    return 0;


}
