#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
struct node
{
    int data;
    struct node *next;

};

int main()
{
    struct node*HEAD,*P;
    int n,x,i;
    cout<<"Enter the number in the list"<<endl;
    cin>>n;
    HEAD=(struct node*)malloc(sizeof(struct node)); 
    cin>>HEAD->data;
    HEAD->next=NULL;
    P=HEAD;

    for(int i =1;i<n;i++)
    {
        P->next=(struct node*)malloc(sizeof(struct node));
        P=P->next;
        P->next=NULL;
        cin>>(&(P->data);
        cout<<(&P->data);
    
       
    }
               
    return 0;
}