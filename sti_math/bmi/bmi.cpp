#include <bits/stdc++.h>
using namespace std;

int main(){
  cout << endl ;
  float weight, height;
  cout << "Weight(kg): "; cin >> weight ;
  cout << "Height(m): "; cin >> height ;

  //bmi compute
  float bmi = weight / (height*height);
  cout << "bmi = " << fixed << setprecision(1) << bmi << " , ";

  //Output
  if( bmi < 18.5 ) cout << "過輕" << endl ;
  else if( bmi < 24 ) cout << "正常" << endl ;
  else if( bmi < 27 ) cout << "過重" << endl ;
  else if( bmi < 30 ) cout << "輕度肥胖" << endl ;
  else if( bmi < 35 ) cout << "中度肥胖" << endl ;
  else cout << "重度肥胖" << endl ;

  cout << endl ;

}



