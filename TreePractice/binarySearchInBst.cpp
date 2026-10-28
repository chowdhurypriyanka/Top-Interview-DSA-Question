#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int data){
        this->data=data;
        left=right=nullptr;
    }
};
Node* insert(Node* root,int x){
    if(root==NULL) return new Node(x);
    if(x<root->data){
        root->left=insert(root->left,x);
    }
   else if(x>root->data){
    root->right=insert(root->right,x);
   }
   return root;
}
int BSTSearch(Node* root,int key){
    while(root!=NULL){
        if(root->data==key)return key;
        if(key<root->data){
            root=root->left;
        }else{
            root= root->right;
        }
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n;
    Node* temp = nullptr;
    while(n--){
        cin>>x;
        temp=insert(temp,x);
    }
    int key;
    cin>>key;
    cout<<BSTSearch(temp,key);
    return 0;
}

/* 7
8 3 10 1 6 14 4
6 */