#include <iostream>
#include <string>
#include <sstream>
#include <vector>
//string split function

using namespace std;
vector<string> v;

void splitString(string a )
{
  while(a.find(' ') !=string::npos)
  {
    int position=0;
    int initial=0;
    string temp="";
    position=a.find(' ');
    temp=a.substr(initial,position);
    a=a.substr(position+1,a.length());
    initial=position+1;
    v.push_back(temp);
  }
  v.push_back(a);
}



// To execute C++, please define "int main()"
int main() {
  
string hey="hello world i am a computer";
splitString(hey);
  
  for( unsigned int i=0;i<v.size();i++)
  {
    cout<<v[i]<<"lol"<<endl;
    
  }
}
