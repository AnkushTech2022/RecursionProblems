
// cpp program to remove character from string using recursion.
#include<bits/stdc++.h>
using namespace std;

string removeCharRecursivly(string str, char target){
  if(str.length()==0){
  return "";
  }
  
  if(str[0]=x){
  return removeCharRecursivly(str.substr(1), target);
  }
  return str[0]+removeCharRecursivly(str.substr(1), target);
}

int main(){
  string str;
  cout<<"enter string"<<endl;
  cin>>str;
  char ch;
  cout<<"enter character"<<endl;
  cin>>ch;
  str= removeCharRecursivly(str, ch);
  
 
  cout<<str;
   return 0;
}
