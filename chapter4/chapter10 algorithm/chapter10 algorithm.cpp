// chapter10 algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<sstream>
#include<vector>
#include<algorithm>
#include<list>
#include<iostream>
#include<numeric>
#include<fstream>
using namespace std;

//int _tmain(int argc, _TCHAR* argv[])
//{
//	int arr[] = {1,1,2,3,4,5,2,1,2,1,1,5};
//	 
//	cout<< count(begin(arr),end(arr),2)<<endl;
//	system("pause");
//}
//-------------函数传递vec 不太可取，vector是个类，结束作用域会触发析构函数，指针失效
//struct Sales_Data
//{
//	Sales_Data(){};
//	Sales_Data(int ss):m(ss){}
//	~Sales_Data(){};
//	int sbn()
//	{
//		return m;
//	}
//	int m,n;
//};
//bool comparevec(Sales_Data &s0,Sales_Data& s1)
//{
//	//vector<Sales_Data> vec;
//	//cout<<s0.sbn
//	return s0.sbn()>s1.sbn();
//}
//int _tmain(int argc,_TCHAR *argv[])
//{
//	Sales_Data s1(7);
//	Sales_Data s2(6);
//	//vector<Sales_Data> vec;
//	bool bl = false;
//	if (comparevec(s1,s2))
//	{
//		bl = true;
//		//cout<<"比较了一下，确实a大于b"<<endl;
//	}
//	else
//	{
//		cout<<"其实还是a小于b"<<endl;
//	}
//	if (bl)
//	{
//		cout<<"看到了吧现在a是大于b的"<<endl;
//	}
//
//	system("pause");
//}
//--------------------------------流迭代器读取文件
//D:\c++learning\c-learning\chapter4
//int _tmain(int argc,char *argv[])
//{
//	vector<string> vec;
//	string filepath = "D:\\c++learning\\c-learning\\chapter4\\股票委托时间.txt";
//	ifstream fd(filepath);
//
//	istream_iterator<string> iter1(fd),eof ;
//	/*while (iter1!=eof)                           //---两种方式都可以，理解的话copy写起来更方便 while 更直观
//	{
//		vec.push_back(*(iter1++));
//	}*/
//	copy(iter1,eof,back_inserter(vec));
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout<<vec[i]<<endl;
//	}
//	system("pause");
//}
//----------排序算法，algorithm
//int _tmain(int argc,char*argv[])
//{
//	istream_iterator<int> iter(cin),eof;
//	vector<int> vec;
//	while (iter!=eof)
//	{
//		vec.push_back(*iter++);
//	}
//	sort(vec.begin(),vec.end());
//	for(auto c:vec)
//	{
//		cout<<c<<endl;
//
//	}
//	system("pause");
//}
//int _tmain(int argc,char *argv[])
//{
//	istream_iterator<int> iter(cin),eof;
//	vector<int> vec;
//	//unique_copy(iter,eof,back_inserter(vec));
//	//while (iter!=eof)
//	//{
//	//	vec.push_back(*iter++);
//	//}
//	sort(vec.begin(),vec.end());  //不能用cbegin
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout<<vec[i]<<endl;
//	}
//	system("pause");
//}
int _tmain(int argc,char*argv[])
{
	istream_iterator<int> iter(cin),eof;
	vector<int> vec;
	while (iter!=eof)
	{
		vec.push_back(*iter++);	
	}
	ofstream of1("D:\\c++learning\\c-learning\\chapter4\\chapter10 algorithm\\of1.txt");
	ofstream of2("D:\\c++learning\\c-learning\\chapter4\\chapter10 algorithm\\of2.txt");
	ostream_iterator<int> os1(of1," ");
	ostream_iterator<int> os2(of2,"\n");
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i]%2==0)
		{
			os1 = vec[i];
			os1++;
		}
		else
		{
			os2 =vec[i];
			os2++;
		}
	}
	getchar();
	system("pause");
	return 0;

}