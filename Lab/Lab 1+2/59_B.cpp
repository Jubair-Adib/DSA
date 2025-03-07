//59
//59
//59
//59
//59
//59
#include <bits/stdc++.h>
using namespace std;
struct ll
{
    struct student
    {
        student *next;
        string name;
        int roll;
    };
    student *head=NULL;
    student *tail=NULL;

    void insert_first(string name, int roll){
	    student *a = (student*)malloc(sizeof(student));
    	a->next=NULL;
   	    a->name=name;
    	a->roll=roll;
       	if(head==NULL){
            head=a;
            tail=a;
        }
       	else{
       	    a->next=head;
            head=a;
        }
    }
    
    void print(){
        student* p=head;
    	while(p){
        	cout<<(p->name)<<" "<<(p->roll)<<endl;
        	p=p->next;
    	}
    }

};

int main()
{
    int n;
    cin>>n;
    ll ms;
    while(n--){
        string s;
        int r;
        cin>>s>>r;
        ms.insert_first(s,r);
    }
    ms.print();
    return 0;
}
