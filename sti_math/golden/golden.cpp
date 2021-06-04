#include <bits/stdc++.h>
using namespace std;

int main(){
  float height, legHeight;
  float res;
  cin >> height >> legHeight;
  res = ((height*0.618)-legHeight) / (1-0.618);
  cout << fixed << setprecision(5) << res << endl ;

}
