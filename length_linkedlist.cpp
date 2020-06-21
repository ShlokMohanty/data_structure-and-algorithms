#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** head_ref,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(* head_ref);
    (*head_ref)=new_node;
}
int getcount(Node* head)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
        
    }
    return count;
}
int main()
{
    Node* head=NULL;
    push(&head,1);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    push(&head,1);
    cout<<"count of node is: "<<getcount(head)<<endl;
    return 0;
}
