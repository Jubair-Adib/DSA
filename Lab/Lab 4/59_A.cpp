#include <iostream>

using namespace std;

struct Solution {
    struct node{
        char c;
        node *next;
        node(char x){
            c = x;
            next = nullptr;
        }
    };
    node *head = nullptr;
    node *tail = head;
    char Top(){
        return head->c;
    }
    void pushCharacter(char C){
        node *temp = new node(C);
        if (!head){
            head = temp;
            tail = head;
        }
        else{
            temp->next = head;
            head = temp;
        }
    }
    void popCharacter(){
        if (head){
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }

};

struct Queue{
    struct node{
        char c;
        node *next;
        node(char x){
            c = x;
            next = nullptr;
        }
    };
    node *head = nullptr;
    node *tail = head;
    char Top(){
        return head->c;
    }
    void enqueueCharacter(char ch){
        if (!head){
            node *temp = new node(ch);
            head = temp;
            tail = head;
        }
    }
    void dequeueCharacter(){
        if (head){
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);

      // create the Solution class object p.
    Solution obj;
    Queue pbj;
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        pbj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.Top() != pbj.Top())
        {
            isPalindrome=false;
            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
