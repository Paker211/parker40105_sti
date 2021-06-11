#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[8][8];
  int tmp = 1, tmp2 = 64 ;
  cout << endl ;

  for(int i=0; i<8 ; i++ ){
    for(int j=0; j<8 ; j++ ){
      if( (i%4!=j%4) && ((i+j)%4!=3) ) arr[i][j] = tmp ;
      else arr[i][j] = tmp2 ;
      tmp++ ; tmp2-- ;
    }
  }

  //Output 8*8
    cout << "+——————+——————+——————+——————+——————+——————+——————+——————+" << endl ;
  for(int i=0 ; i<8 ; i++ ){
    for(int j=0; j<8 ; j++ ){
      if( arr[i][j]<10 ){
        cout <<"|  " << arr[i][j] << "   " ;
      }
      else{
        cout <<"|  " << arr[i][j] << "  " ;
      }
      if(j==7) cout << "|";
    }
    cout << endl ;
    cout << "+——————+——————+——————+——————+——————+——————+——————+——————+" << endl ;
  }
  cout << endl ;
}


