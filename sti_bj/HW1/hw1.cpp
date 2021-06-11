#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("hw.txt");
  myfile << "Student ID: B10817013\n";
  myfile << "Name: 劉承樸\n";
  myfile << "Interest: Programming\n";
  myfile.close();
  return 0;
}
