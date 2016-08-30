#include <iostream>
#include <queue>
using namespace std;
// level order traversal of a binary tree
// To execute C++, please define "int main()"


 struct treeNode
{
  int data; // this is the value of the node
  treeNode * left; // value of the left subtree 
  treeNode * right; // value of the right subtree  
};


int levelTrav(treeNode *root);


int levelTrav(treeNode *root)
{
  if(root==nullptr) return 0;
  
  queue<treeNode*> trav;
  trav.push(root);
  while(!trav.empty())
  {
    treeNode *current= trav.front();
    cout<<current->data<<endl;
    if(current->left!=nullptr)trav.push(current->left);
    if(current->right!=nullptr)trav.push(current->right);
    trav.pop();   
  }
  return 0;
}




int main() {

  treeNode * f =new treeNode;
  treeNode * d =new treeNode;
  treeNode * j =new treeNode;
  treeNode * b =new treeNode; 
  treeNode * e =new treeNode;
  treeNode * g =new treeNode;
  treeNode * k =new treeNode;
  treeNode * a =new treeNode;
  treeNode * c =new treeNode;
  treeNode * i =new treeNode;
  treeNode * h =new treeNode;
  
    f->data=1;
    d->data=2;
    j->data=3;
    b->data=4;
    e->data=5;
    g->data=6;
    k->data=7;
    a->data=8;
    c->data=9;
    i->data=10;
    h->data=11;
    
    f->left=d;
    f->right=j;
    d->left=b;
    d->right=e;
    j->left=g;
    j->right=k;
    b->left=a;
    b->right=c;
    
    e->left=nullptr;
    e->right=nullptr;
    g->left=nullptr;
    g->right=i;
    k->left=nullptr;
    k->right=nullptr;
    a->left=nullptr;
    a->right=nullptr;
    c->left=nullptr;
    c->right=nullptr;
    i->right=nullptr;
    i->left=h;
    h->left=nullptr;
    h->right=nullptr;  
    
    
    levelTrav(f);
  
  return 0;
}
