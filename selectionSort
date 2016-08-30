#include <iostream>
#include <algorithm>
#include <string>
//selection sort
//inplace selection sort
//find lowest element, then swap with first index element, block out first index, repeat

using namespace std;

void selectionSort( int unsorted[], int sizeArray)
{
  int sortedIndex=0;
  int lowindex=0;
  int low=0;
  int value=0;
  int temp=0;
  
  while(sortedIndex!=sizeArray-1)
  {
    value=unsorted[sortedIndex];
    low=value;
    lowindex=sortedIndex;
    for(unsigned int i=sortedIndex;i<sizeArray;i++)
    {
      if(unsorted[i]<low) 
      {
        low=unsorted[i];
        lowindex=i;
        //cout<<low<<endl;
      }      
    }
    unsorted[sortedIndex]=low;
    unsorted[lowindex]=value;     
    sortedIndex++;
  }  
}


// To execute C++, please define "int main()"
int main() {
  
  int a[]={4,10,2,100,23,43,15,45,76};
  int sizearray=sizeof(a)/sizeof(a[0]);
  //cout<<sizearray<<endl;
  
  selectionSort(a,sizearray);
  
  for(unsigned int j=0;j<sizearray;j++)
  {
    cout<<a[j]<<endl; 
  }
  
    
}
