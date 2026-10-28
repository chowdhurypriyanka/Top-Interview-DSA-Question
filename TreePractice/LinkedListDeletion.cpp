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
void display(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *deleteEnd(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
Node *deleteBegin(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *deleteAtPos(Node *head, int pos)
{
    if (head == NULL || pos < 1)
        return head;
    if (pos == 1)
        return deleteBegin(head);
    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = del->next;
    delete del;
    return head;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int x, n;
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
   // head=deleteBegin(head);
    // head = deleteEnd(head);
    head = deleteAtPos(head, 3);
    cout << endl;
    display(head);
    return 0;
}