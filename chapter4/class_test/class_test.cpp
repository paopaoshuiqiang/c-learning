// class_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<sstream>
//#include "screen.h"
using namespace std;

class Scream
{
public:
	Scream(){};
	//using pos = std::string::size_type;
	typedef string::size_type pos;
	Scream(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
	Scream(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}

	~Scream();

private:
	int height,width;
	string contents;
};

Scream::Scream()
{
}

Scream::~Scream()
{
}
int _tmain(int argc, _TCHAR* argv[])
{
	//return 0;
	//screen myscreen();
	//myscreen.move(4,0).set("#").display(cout);

}

