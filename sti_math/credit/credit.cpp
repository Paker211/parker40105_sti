#include <bits/stdc++.h>
using namespace std;

int main(){
  cout << endl ;
  string creditNumber ;
  cout << "The VISA credit number : " ;
  cin >> creditNumber ;
  int total = 0 ;

  // Count total
  for(int i=0; i<16 ;i++){
    if(i%2){  //second
      total += creditNumber[i]-'0';
    }
    else{   //first
      int tmp = (creditNumber[i]-'0')*2;
      total += tmp/10 + tmp%10 ;
    }
  }
  cout << "Total:" << total ;

  //Verficate
  if( total%10 ){
    cout << "The credit number is invalid." << endl ;
  }
  else{
    cout << " ,can divide by 10" << endl ;
    cout << "The credit number is valid." << endl ;
  }
  cout << endl ;
}




