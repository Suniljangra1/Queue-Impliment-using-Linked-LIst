// Queue Impliment Using linklist 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node    
{
    public:
    int value;
    Node *next;
     Node()
     {
        next = NULL;
        value = 0;
     }
};
class LQueue
{
    Node *head;
    public:
    LQueue()
    {
        head = NULL;
    }
    void Insert_(int v)
    {
        Node *temp= new Node();
        temp->value= v;
        if(head==NULL)
        head=temp;
        else {
            Node *s=head;
            while(s->next!=NULL)
            {
                s=s->next;
            }
            s->next = temp;
           
        }
    }
    void Insert_Begin(int value)
    {
        Node *temp = new Node();
        temp->value = value;
        temp->value= value;
        if(head==NULL)
        head=temp;
        else {
            Node *s = head;
            temp->next= s;
            head= temp;
        }
    }
    void Dequeue_Begin()
    {
        Node *temp = head;
        head = temp->next ;
        // head = temp;
    }
    void Dequeue_End()
    {
        Node *temp= head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        
    }
    void Print_()
    {
        Node *tmp = head ;
        while(tmp!=NULL)
        {
            cout<<tmp->value<<" ";
            tmp=tmp->next;
        }
    }
};
int main()
{
    LQueue l;
    l.Insert_(10);
    l.Insert_(56);
    l.Insert_(20);
    l.Insert_(30);
    l.Insert_(60);
    l.Insert_Begin(63);
    // l.Dequeue_Begin();
    l.Dequeue_End();
    l.Print_();
}