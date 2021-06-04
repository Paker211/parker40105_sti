#include <bits/stdc++.h>
using namespace std;

int main(){
  //Coefficient
  int coe[17]={ 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
  char ver[11]={ '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
  int total=0;
  string idNumber;
  cout << endl ;
  cout << "ID number: " ;
  cin >> idNumber;

  for(int i=0; i<17 ;i++){
    total += (idNumber[i]-'0') * coe[i];
  }

  //Verificate
  int remainder = total%11;
  char verNumber = ver[remainder];

  if( idNumber[17] == verNumber)
    cout << "The number is valid." << endl ;
  else
    cout << "The number is invalid." << endl ;

  cout << endl ;
}


