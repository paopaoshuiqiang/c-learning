#pragma once
#include<iostream>
using namespace std;
class screen
{
public:
	screen(void);
	screen &move(int i,int j);
	screen &set(string s)
	{
		return *this;
	}
	screen &display(ostream &os)
	{
		return *this;
	}




	~screen(void);
private:
	int i,j,k;
};

