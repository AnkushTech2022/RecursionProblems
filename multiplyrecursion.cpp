#include<bits/stdc++.h>
using namespace std;

int multiplyRecursion(int arr[]){
  int length=sizeof(arr)/sizeof(0);
  if(length<0){
    return;
  }
  else{
    return multplyRecursion(arr*arr[length-1]);
  }
}


int main(){
  int arr[100];
  int n;
  cout<<"Enter size of array:"<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
 cout<<multiplyRecursion(int arr);
}
