#include <iostream>
using namespace std;
// inserting a node into a linked list
// To execute C++, please define "int main()"
struct node 
{
  int data;
  node* next;
};


node* insertNode(node* head, int x)
{
  node* add=new node;
  add->data=x;
  add->next=head;
  head=add;  
  return head;
}

void print(node* head)
{
  
  node* temp=head;
  cout<<"List of nodes: " <<endl;
  while(temp!=nullptr)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
    
  }
  
}


int main() {

  node* head=new node;
  head->next=nullptr;
  head->data=2;

  
  for(int i=0;i<10;i++)
  {
    head=insertNode(head,i);
  }
  print(head);
  
  
  
  
  
  

  
  
  return 0;
}
