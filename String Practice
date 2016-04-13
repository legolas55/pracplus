#include <iostream>
#include <string>
using namespace std;


// To execute C++, please define "int main()"
int main() {
  
  /*
  int a;
  void *p0;
  int *p;
  p0=p;
  
  int **q=&p;
  int ***r=&q;
  */
  
  string s1="hello";
  string s2="world";
  
  string s3=s1+s2;
  
  for(string::size_type i=0;i<s3.length();i++)
  {
    s3[i]=toupper(s3[i]);
  }
  
  string s4=s3 +' '+"lol";
  
  
  if(s4.find('l') !=string::npos)
  {
    int position=s4.find('l');
    cout<<"Found the char at position "<< position<<endl;
  }
  else
  {
    cout<<"Does not contain any spaces!"<<endl;
  }
  
  if(s4.rfind('l') !=string::npos)
  {
    int position=s4.rfind('l', 13);
    cout<<"Found the char at position "<< position<<endl;
  }
  else
  {
    cout<<"Does not contain any spaces!"<<endl;
  }
  
    if(s4.find_first_of('l') !=string::npos)
  {
    int position=s4.find_first_of('l');
    cout<<"Found the char at position "<< position<<endl;
  }
  else
  {
    cout<<"Does not contain any spaces!"<<endl;
  }
  
  
  
  
  cout<<s4<<endl;
  
  
  
  
  
  
  
  return 0;
}
