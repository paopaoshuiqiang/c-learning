#include "stdafx.h"
#include "chpater7.h"
#include<sstream>
#include<iostream>
using namespace std;

chpater7::chpater7(void)
{
	hour = 0;
	minute = 0;
	second = 0;
}

void chpater7::settime(int newh,int newm,int news)
{
	hour=newh;
	minute = newm;
	second = news;
}
void chpater7::showtime()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}


chpater7::~chpater7(void)
{

}
