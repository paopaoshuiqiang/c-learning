// chapter 7-class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<sstream>
#include"chpater7.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//return 0;
	//using pf = int(*)(int*,int);
	chpater7 gchp;
	gchp.showtime();
	gchp.settime(10,20,30);
	chpater7 mychp(gchp);
	mychp.showtime();
	system("pause");
	return 0;

}

