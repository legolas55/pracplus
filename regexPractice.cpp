#include <iostream>
#include <string>
#include <regex>

using namespace std;

// To execute C++, please define "int main()"
int main() {
  
  string str;
  str="helloworld@gmail.com";
  
  regex a("abc", regex_constants::icase); // we dont care about upper or lower case
  regex b("abc"); // match only this
  regex c("abc."); // you can have any character except newline after abc
  regex d("abc?"); // zero or 1 preecding character before the ?
  regex e("abc*"); // zero or more preceeding characters before the *
  regex f("abc+"); // one or more preceeding characters before the +
  regex g("ab[cd]*"); // any amount of characters inside the square bracket before *
  regex h("ab[^cd]*"); // any character not inside the square bracket can be matched before *
  regex i("ab[cd]{3}"); // match 3 characters inside the square bracket is a match
  regex j("ab[cd]{3,}"); // match 3 or more characters inside the square bracket is a match
  regex k("ab[cd]{3,5}"); // match 3 to 5 characters inside the square bracket is a match
  regex l("abc|de[fg]"); // this or | can be a match
  regex m("abc|de[f\]g]"); //match a square bracket?, need to escape it \] 
  regex n("(abc)de+\\1"); // \1 match the first group (abc) the double \\ is to escape the \
  regex o("(ab)c(de+)\\2\\1"); // 2 groups 
  regex p("[[:w:]]+@[[:w:]]+\.com");//[[:w:]] word character: digit number or underscore
  regex p("^abc.");// match only if abc is at the beggining
  regex p("abc.$");// match only if abc is at the end of the string
  bool match=regex_match(str,p);
  bool watch=regex_search(str,p);
  
  cout<<(match ? "Matched": "Not Matched" )<<endl;
  cout<<(watch ? "Matched": "Not Matched" )<<endl;
}
