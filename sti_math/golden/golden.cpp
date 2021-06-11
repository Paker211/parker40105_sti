#include <bits/stdc++.h>
using namespace std;

int main(){
  float height, legHeight;
  float res;
  cout << "身高: " ; cin >> height ;
  cout << "腳長: " ; cin >> legHeight ;

  //Output
  res = ((height*0.618)-legHeight) / (1-0.618);
  cout << fixed << setprecision(5) << res << endl ;

}
