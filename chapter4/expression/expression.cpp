// expression.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include<sstream>
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	//------------------使用 条件运算符   需注意条件运算符的优先级很低，嵌套时最好加上括号，两个表达式的类型要一致。
	/*int a[5]= {66,80,99,59,71};
	string finalgrade;
	for (auto iter=begin(a);iter!=end(a);++iter)
	{
		cout<<*iter<<"";
		cout<<endl;
		finalgrade = (*iter>90)?"high pass":(*iter<60)?"fail":"pass";
		cout<<finalgrade<<endl;
	}
	system("pause");*/
	//------------------sizeof(数组)表示数组成员个数，sizeof（指针） 就是1
	/*int x[10];int *p= &x[0];
	cout<<sizeof(x)/sizeof(*x)<<endl;
	cout<<sizeof(p)/sizeof(*p)<<endl;
	system("pause");*/
}

