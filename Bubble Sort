#include <iostream>
using namespace std;
//bubble sorting
// take the ith element and i+1th element
//look at which one is bigger
//swap them
// repeat for every element

void bubblesort(int a[],int asize)
{ 
  for(int i=0;i<asize-1;i++)
  {
    for(unsigned int i=0; i<asize-1;i++)
    {
       if(a[i]>a[i+1])
       {
         int temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
       }
    }
  }  
}



// To execute C++, please define "int main()"
int main() {
  
  int a[]={14,5,6,12,7,2};
  int sizearray=sizeof(a)/sizeof(a[0]);
  bubblesort(a,sizearray);

  for(int i=0;i<sizearray;i++)
  {
    cout<<a[i]<<endl;
  }
  
}
