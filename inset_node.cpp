#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

node* insert_Node(node* head,int i,int data)
{
if(head==NULL)
{
return -1;
}
if (i==0)
{
node* newhead= new node(data);
newhead->next=head;
return newhead;
}
else{
node* x=insert_Node(head+1,i-1,data);
head->next=x;
return head;
}
Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    Node *head = takeinput();
    int pos, data;
    cin >> pos >> data;
    head = insertNodeRec(head, pos, data);
    print(head);
    return 0;
}

