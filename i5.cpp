#include &lt;iostream&gt;
using namespace std;

struct Node{
    int item;
    Node *left,*right;
    Node(int x){ item=x; left=right=NULL; }
};

Node* insert(Node* root, int x){
    if(!root) return new Node(x);
    if(x &lt; root-&gt;item) root-&gt;left = insert(root-&gt;left,x);
    else root-&gt;right = insert(root-&gt;right,x);
    return root;
}

void inorder(Node* root){
    if(!root) return;
    inorder(root-&gt;left);
    cout &lt;&lt; root-&gt;item &lt;&lt; " ";
    inorder(root-&gt;right);
}

int main(){
    Node* root=NULL;
    root=insert(root,30);
    insert(root,10);
    insert(root,50);
    inorder(root);
}
