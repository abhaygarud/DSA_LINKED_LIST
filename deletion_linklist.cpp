#include <iostream>
using namespace std;

struct Node
{
    struct Node*next;
    int data;
};
void Transerve_new(struct Node*ptr){
    while (ptr!=NULL){

        cout<<"Elements:"<<ptr->data<<endl;
        ptr=ptr->next;

    }
}

void Transerve(struct Node*ptr){
    while (ptr!=NULL){

        cout<<"Elements:"<<ptr->data<<endl;
        ptr=ptr->next;

    }
    
}
struct Node*Deletion_first(struct Node*head){
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct  Node*Deletion_index(struct Node*head,int index)
{
    struct Node*p=head;
    struct Node*q=head->next;

    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
};
struct Node*Deletion_last(struct Node*head)
{
    struct Node*p=head;
    struct Node*q=head->next;

    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}



int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));   
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;

    second ->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;
    // cout<<"list before deletion"<<endl;
    // Transerve(head);
    // cout<<"List after deletioon first element"<<endl;
    // head=Deletion_first(head);
    // Transerve(head);
    // cout<<"list after deletion usign insdex value"<<endl;
    // head=Deletion_index(head,1);
    // Transerve(head);
    // cout<<"creating another linklist with same data"<<endl;
    Transerve(head);
    cout<<"deletion at the last"<<endl;
    head=Deletion_last(head);
    Transerve(head);





    
    return 0;
}