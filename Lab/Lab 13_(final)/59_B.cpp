//59
//59
//59
#include<iostream>
using namespace std;

int heap[100000];
int heap2[100000];
int last_index=-1;

int get_min(){
    if(last_index==-1) return -1;
    return heap[0];
}

int parent(int i){
    return (i-1)/2;
}

void heapifyUp(int i){
    while(1){
        if(i==0) break;
        if(heap2[parent(i)]<heap2[i]) break;
        swap(heap[parent(i)],heap[i]);
        swap(heap2[parent(i)],heap2[i]);
        i=parent(i);
    }
}

void insert(int x,int y){
    heap[last_index+1]=x;
    heap2[last_index+1]=y;
    last_index++;
    heapifyUp(last_index);
}

int leftChild(int i){
    return 2*i+1;
}

int rightChild(int i){
    return 2*i+2;
}

void heapifyDown(int i){
    int node=i;
    int left=leftChild(i);
    int right=rightChild(i);
    if (left<=last_index && heap2[left]<heap2[node]) node=left;
    if (right<=last_index && heap2[right]<heap2[node]) node=right;
    if (node!= i){
        swap(heap[i],heap[node]);
        swap(heap2[i],heap2[node]);
        heapifyDown(node);
    }
}

int extractMin(){
    int ret=heap[0];
    heap[0]=heap[last_index];
    heap2[0]=heap2[last_index];
    last_index--;
    heapifyDown(0);
    return ret;
}

void print_min_heap(int x){
    for(int i=0;i<=x;i++){
        if(i!=0) cout<<" ";
        cout<<heap[i];
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        insert(x,y);
    }
    while(last_index!=-1){
        cout<<extractMin()<<endl;
    }
    return 0;
}
