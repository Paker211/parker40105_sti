#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<iostream>
#include<stdlib.h>
#pragma comment(lib,"winmm.lib")
#include<mmsystem.h>
using namespace std;
int main()
{
	mciSendString(TEXT("open ./Music.mp3 alias s1"),NULL,0,NULL);

	mciSendString(TEXT("play s1"),NULL,0,NULL);

	Sleep(9000);//试听

	mciSendString(TEXT("close S1"),NULL,0,NULL);

	return 0;
}
