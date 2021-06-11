#include <bits/stdc++.h>
using namespace std;

int main(){
  int square[8][8];
  int i=0, j=4;

  for(int x=1; x<49 ; x++ ){
    if( (x%7) == 1 ) i++ ;
    else{
      i-- ; j++ ;
    }
    if( i==0 ) i=7;
    if( j>7 ) j=1;

    square[i][j] = x;
  }

    cout << "+——————+——————+——————+——————+——————+——————+——————+" << endl ;
  for( int i=1 ; i<=7 ; i++ ){
    for( int j=1 ; j<=7 ; j++ ){
      if( square[i][j]<10 ){
        cout <<"|  " << square[i][j] << "   " ;
      }
      else{
        cout <<"|  " << square[i][j] << "  " ;
      }
      if(j==7) cout << "|";
    }
    cout << endl;
    cout << "+——————+——————+——————+——————+——————+——————+——————+" << endl ;
  }
}


