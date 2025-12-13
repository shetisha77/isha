#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key,h;
    Node *l,*r;
    Node(int k):key(k),h(1),l(NULL),r(NULL){}
};

int height(Node* n){ return n?n->h:0; }

Node* rightRotate(Node* y){
    Node* x=y->l;
    y->l=x->r;
    x->r=y;
    y->h=max(height(y->l),height(y->r))+1;
    x->h=max(height(x->l),height(x->r))+1;
    return x;
}
