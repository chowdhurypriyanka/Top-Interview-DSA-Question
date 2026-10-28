#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int sizeLinkedList(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
Node *insertBegin(Node *head, int x)
{
    if (head == NULL)
        return new Node(x);
    Node *newNode = new Node(x);
    newNode->next = head;
    return newNode;
}
Node *insertEnd(Node *head, int x)
{
    if (head == NULL)
        return new Node(x);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(x);
    temp->next = newNode;
    return head;
}
Node *insertAtPos(Node *head, int pos, int x)
{
    if (pos < 1)
        return head;
    if (pos == 1)
        return insertBegin(head, x);
    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(x);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        Node *newNode = new Node(x);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    display(head);
    cout << endl;
    cout << sizeLinkedList(head);
    int num;
    cin >> num;
    head = insertAtPos(head, 4, 200);
    display(head);
    cout << endl;
    // head=insertBegin(head,num);
    // display(head);
    // cout<<endl;

    // cin>>num;
    // head=insertEnd(head,num);
    // display(head);

    return 0;
}