#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void linklist_trraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "elements :" << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node *Insertionfirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *Insertion_index(struct Node *head, int data, int index)
{
    struct Node *ptr;
    struct Node *p = head;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node* Insertion_last(struct Node*head,int data){
    struct Node*ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));

    struct Node*p=head;
    while (p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    //aloocate memory for list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //link first and second node
    cout<<"enter the number in head:";
    cin>>head;
    head->data;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 60;
    third->next = NULL;

    cout<<"List before insertion"<<endl;
    linklist_trraversal(head);

    cout<<"List after insertion at first node"<<endl;
    head=Insertionfirst(head,14);
    linklist_trraversal(head);

    cout<<"List insertion a the index value"<<endl;
    head = Insertion_index(head, 15, 2);
    linklist_trraversal(head);

    cout<<"insertion athwe the last value of the list"<<endl;
    head=Insertion_last(head,44);
    linklist_trraversal(head);


    return 0;
}