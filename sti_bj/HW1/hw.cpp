#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int main()
{
  int n;
  //open the audio file
  mciSendString("open \"Music.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

  cout<<"Press 1 to start playing.\n";
  cin>>n;

  //play the audio file and specify start and end positions
  if(n==1)
  {
    cout<<"file playing....\n";
    time_t t1=time(0);
    mciSendString("play mp3 from 10000 to 30000 wait", NULL, 0, NULL);
    time_t t2=time(0);
    cout<<"Duration of the play :"<<t2-t1<<" seconds."<<endl;
  }
  else
    cout<<"You did not press 1."<<endl;

  //close the audio file
  mciSendString("close mp3", NULL, 0, NULL);

  return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<iostream>
#include<stdlib.h>
#pragma comment(lib,"winmm.lib")
#include<mmsystem.h>
using namespace std;
int main()
{
	mciSendString(TEXT("open E:\\ye.mp3 alias s1"),NULL,0,NULL);

	mciSendString(TEXT("play s1"),NULL,0,NULL);

	Sleep(9000);//试听

	mciSendString(TEXT("close S1"),NULL,0,NULL);

	return 0;
}
————————————————
版权声明：本文为CSDN博主「开心果٩(๑^o^๑)۶」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_47170063/article/details/110310633

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
