#include <bits/stdc++.h>
using namespace std;

int main(){
  int total=0 ;
  string isbnNumber;
  cout << endl ;
  cout << "ISBN number : " ;
  cin >> isbnNumber;
  for(int i=0; i<9 ;i++){
    total += ( isbnNumber[i]-'0') * (10-i);
  }

  //Verificate
  if( (11-(total%11)) == (isbnNumber[9]-'0')){
    cout << "The number is valid" << endl ;
  }
  else{
    cout << "The number is invalid" << endl ;
  }
  cout << endl ;
}




