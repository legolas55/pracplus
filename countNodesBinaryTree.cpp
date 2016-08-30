#include <iostream>
using namespace std;

// Binary Sort Trees

  struct treeNode
{
  int data; // this is the value of the node
  treeNode * left; // value of the left subtree 
  treeNode * right; // value of the right subtree  
};

int countNodes(treeNode* rootNode);


int countNodes(treeNode* rootNode)
{
  
  if(rootNode==NULL)
  {
    return 0; //there is no tree
  }
  else
  {
    int count=1;
    count +=countNodes(rootNode->left);
    count +=countNodes(rootNode->right);
    return count;
  }
}

// To execute C++, please define "int main()"
int main() {
  treeNode* rootNode =new treeNode;
  
  treeNode* leftChildRoot=new treeNode;
  treeNode* rightChildRoot=new treeNode;
  
  rootNode->left=leftChildRoot;
  rootNode->right=rightChildRoot;
  
  treeNode* leftLeftChild=new treeNode;
  treeNode* rightLeftChild=new treeNode;
  treeNode* rightRightChild=new treeNode;
  
  leftChildRoot->left=leftLeftChild;
  leftChildRoot->right=rightLeftChild;
  rightChildRoot->right=rightRightChild;
  
  cout<<" Tree has "<<countNodes(rootNode)<<" nodes"<<endl;
  
  
  
  return 0;
}
