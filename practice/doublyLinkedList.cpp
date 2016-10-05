#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
int main() {

  
// This is linked list practice
// I will practice how to search a linked list
// build this linked list{1,2,3,4,5,6,7,8,9,10}

struct node 
{
  int data;
  node* next;
  node * previous;
};

  node* n = new node;
  node* head = n;
  node* temp = n;
  
  n->data = 1;
  n->next = NULL;
  n->previous=NULL;

  for (int i = 2; i <= 10; i++)
  {
    cout<<"i "<< i <<endl;
    n = new node;
    n->data = i;
    n->previous=temp;
    temp->next = n;
    temp = n;
  }
  n->next = NULL;
  temp = head;
  cout<<"hi"<<endl;
  cout<<"temp->data "<<temp->data<<endl;

  while (temp!=NULL)
  {

        cout << "Current node is " << temp->data<<endl; 
        if(temp->next!=NULL) cout<< "Next node is " << temp->next->data <<endl;
        if(temp->previous!=NULL) cout<<"Previous Node is "<<temp->previous->data<<endl;
        temp=temp->next;
    
  }

  
  return 0;
}
