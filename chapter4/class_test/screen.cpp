#include "stdafx.h"
#include "screen.h"


screen::screen(void)
{
	i = 0;
	j=0;
	k=0;
}




screen &screen::move(int with,int len)
{
	int row = i+with;
	j = row + len;
	return *this;
}
screen &screen::set(string ss)
{
	
	return *this;
}
screen &screen::display(ostream &os)
{
	
	return *this;
}

screen::~screen(void)
{
}
