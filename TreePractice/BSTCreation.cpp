#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node *left,*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
Node* insert(Node* root, int x){
    if(root==NULL)
    return new Node(x);
    if(x<root->data){
        root->left=insert(root->left,x);
    }
    else if(x>root->data){
        root->right= insert(root->right,x);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node *newNode = nullptr;
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        newNode=insert(newNode,x);
    }
    inorder(newNode);
    return 0 ;
}