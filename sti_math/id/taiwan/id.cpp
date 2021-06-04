#include <bits/stdc++.h>
using namespace std;

int main(){
  map<char, int> cityNumber;
  cityNumber['A']=10; cityNumber['B']=11; cityNumber['C']=12; cityNumber['D']=13;
  cityNumber['E']=14; cityNumber['F']=15; cityNumber['G']=16; cityNumber['H']=17;
  cityNumber['I']=34; cityNumber['J']=18; cityNumber['K']=19; cityNumber['L']=20;
  cityNumber['M']=21; cityNumber['N']=22; cityNumber['O']=35; cityNumber['P']=23;
  cityNumber['Q']=24; cityNumber['R']=25; cityNumber['S']=26; cityNumber['T']=27;
  cityNumber['U']=28; cityNumber['V']=29; cityNumber['W']=30; cityNumber['X']=31;
  cityNumber['Y']=32; cityNumber['Z']=33;
  cout << endl;

  string idNumber;
  cout << "ID card number: " ;
  cin >> idNumber;

  //Compute total
  int total = 0 ;
  total += (cityNumber[idNumber[0]]/10) + (cityNumber[idNumber[0]]%10)* 9;
  for(int i=8; i>0 ;i--) total += (idNumber[9-i]-'0')*i ;

  //Verficate
  int checkNumber = 10-(total % 10) ;
  if( checkNumber+'0' == idNumber[9]){
    cout << "The id number is valid" << endl ;
  }
  else{
    cout << "The id number is invalid" << endl ;
  }







}
