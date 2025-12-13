#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *l,*r;
    Node(int k):key(k),l(NULL),r(NULL){}
};

Node* insert(Node* root,int k){
    if(!root) return new Node(k);
    if(k<root->key) root->l=insert(root->l,k);
    else root->r=insert(root->r,k);
    return root;
}

int main(){
    Node* root=NULL;
    root=insert(root,10);
    root=insert(root,5);
    root=insert(root,15);
}
