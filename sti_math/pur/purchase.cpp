#include <bits/stdc++.h>
using namespace std;

int main(){
  string eanNum;
  cout << endl ;
  cout << "European Article Number :";
  cin >> eanNum;
  int odd=0, even=0, total=0;
  for(int i=0; i<12 ;i++){
    if(i%2) even += eanNum[i]-'0';
    else odd += eanNum[i]-'0';
  }
  total += even*3 + odd;

  //Verificate
  if( (10-(total%10)) == (eanNum[12]-'0') ){
    cout << "The number is valid" << endl ;
  }
  else {
    cout << "The number is invalid" << endl ;
  }
  cout << endl ;
}


