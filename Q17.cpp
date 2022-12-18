#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next; 
};

struct node* head = NULL;

void create()
{
    struct node *ptr,*temp;
    int n;
    cout<<"Enter the value"<<endl;    
    cin>>n;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"memory not allocated"<<endl;
    }
    ptr->data = n;
    ptr->next = NULL;
    
    if(head == NULL)
    {
        head = ptr;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void display()
{
    struct node* temp;
    if(head ==NULL)
    {
        cout<<"Empty list"<<endl;
    }
    else
    {
        temp = head;
    cout<<"The values are:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    }
}

void printsum()
{
     struct node* temp;
     int sum=0;
    if(head ==NULL)
    {
        cout<<"The sum is :"<<sum<<endl;
    }
    else
    {
        temp = head;
    while(temp!=NULL)
    {
        sum=sum+temp->data;
        temp = temp->next;
    }
        cout<<"The sum till now is :"<<sum<<endl;
    }
}
int main()
{
    int p;
    while(1)
    {
    cout<<"\nChoose your operation"<<endl;
    cout<<" 1. Create "<<endl;
    cout<<" 2. Display "<<endl;
    cout<<" 3. Print sum till the last element "<<endl;
    cout<<" 4. exit "<<endl;
    cout<<"Please enter your choice"<<endl;
    cin>>p;
    switch (p)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        printsum();
        break;
    case 4:
        exit(0);
        break;
    }
    }
    return 0;
}
