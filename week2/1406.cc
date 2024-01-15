#include <iostream>
using namespace std;

typedef struct _Node{
    char data;
    struct _Node* next;
    struct _Node* prev;
}Node;

Node* head, *tail, *p;
void init(){
    head = new Node;
    tail = new Node;
    head->prev = head;
    head->next = tail;
    tail->prev = head;
    tail->next = tail;
    p = head;
}

void left(){
    if(p != head){
        p = p->prev;
    }
}

void right(){
    if(p != tail->prev){
        p = p->next;
    }
}

void del(){
    if(p != head){
        Node* t = p;
        p = p->prev;
        p->next = t->next;
        t->next->prev = p;
        delete t;
    }
}

void insert(char a){
    Node* n = new Node;
    n->data = a;
    n->prev = p;
    n->next = p->next;
    p->next->prev = n;
    p->next = n;
    p = n;
}

void all_delete(){
    Node* n = head->next;
    while(n != tail){
        Node* t = n;
        n = n->next;
        delete t;
    }
    delete head;
    delete tail;
}

void print(){
    Node* n = head->next;
    while(n != tail){
        cout << n->data;
        n = n->next;
    }
}

int main(){
    int m;
    string s;
    char c, a;
    init();
    cin >> s;
    for(int i = 0 ; i < s.length() ; i++){
        insert(s[i]);
    }
    cin >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> c;
        if(c == 'P'){
            cin >> a;
            insert(a);
        }else if(c == 'L'){
            left();
        }else if(c == 'D'){
            right();
        }else if(c == 'B'){
            del();
        }
    }
    print();
    all_delete();
    return 0;
}
