#include<iostream>
#include<queue>
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
Node* insert(Node* root,int x){
    Node* newNode=new Node(x);
    if(root==NULL) return newNode;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if(curr->left==NULL){
            curr->left=newNode;
            return root;
        }
        q.push(curr->left);
        if(curr->right==NULL){
            curr->right=newNode;
            return root;
        }
        q.push(curr->right);
    }
    return root;
}
void display(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    int n,x;
    cin>>n;
    Node* root=NULL;
    while(n--){
        cin>>x;
        root=insert(root,x);
    }
    display(root);
    cout<<endl;
    return 0;
}