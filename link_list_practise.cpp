#include <iostream>
using namespace std;

struct Node{
    struct Node*next;
    int data;  
};
void transerve(struct Node*ptr){
    while(ptr!=NULL){
        cout<<"ELEMENT :"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

struct Node*Insertion_first(struct Node*head,int data)
{
    struct Node*ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
 
}

struct Node* Insertion_index(struct Node*head,int data, int index)
{
    struct Node*ptr;
    struct Node*p=head;
    ptr=(struct Node*)malloc(sizeof(struct Node));
   
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}



int main(){
    struct  Node*head;
    struct Node*second;
    struct Node* third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

  head->data=14;
  head->next=second;

  second->data=15;
  second->next=third;

  third->data=16;
  third->next=NULL;

  transerve(head);
  head=Insertion_first(head,13);
  transerve(head);
  head=Insertion_index(head,7,2);
  transerve(head);


    
    return 0;
}