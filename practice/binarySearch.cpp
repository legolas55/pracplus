#include <iostream>
using namespace std;
// Binary Search
// find the first or last occurence in an array
// To execute C++, please define "int main()"

bool binSearch(int a[],int sizeArray,int n);
bool binSearch(int a[10],int sizeArray, int n);
bool binSearch(int *_array,int sizeArray, int n);

bool binSearch(int *_array, int sizeArray, int n)
{
  int low=0;
  int high=sizeArray-1;
  int guess=0;;
  
  while(low<=high)
  {
    guess=(low+high)/2;
    if(_array[guess]==n)
    {
      cout<<"found it"<<endl;
      return guess;
    }
    else if(_array[guess]<n)
    {
      low=guess+1;
      cout<<"too low"<<endl;
    }
    else
    {
      high=guess-1;
      cout<<"too high"<<endl;
    }
  }
  return -1;
}




int main() {

  int b[]={2,4,5,10,10,10,10,10,10,10,20};
  
  int *numbers=b;
  
  cout<<sizeof(b)/sizeof(b[0])<<endl;
  
  int sizeb=sizeof(b)/sizeof(b[0]);
  
  binSearch(numbers,sizeb,5);
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}
