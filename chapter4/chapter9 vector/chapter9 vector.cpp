// chapter9 vector.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include<iostream>
#include<sstream>
#include<vector>
#include<list>
#include<deque>
#include<forward_list>
//#include<iostream>  
#include<thread>
using namespace std;


//int _tmain(int argc, _TCHAR* argv[])
//{
//	//return 0;
//	vector<int> vec(10);
//	vec[2] = 10;
//	int n = 10;
//	auto begt = vec.begin();
//	auto endt = vec.end();
//	int t=0 ;
//	int k = 0;
//	for(begt;begt!=endt;++begt)
//	{
//		
//		if (*begt ==n)
//		{
//			cout<<k<<endl;
//			cout<<"找到元素位置了"<<endl;
//			t = t+1;
//		}
//		if (begt==(endt-1))
//		{
//			if(!t)
//			{
//				cout<<"没有找到元素"<<endl;
//			}
//		}
//		k++;
//	}
//	system("pause");
//}

//------------------------assign 元素类型不同的复制
//int _tmain(int argc,_TCHAR *argv[])
//{
//	vector<string> vec;
//	list<const char *> li;
//	vec.assign(li.cbegin(),li.cend());
//	return 0;
//}

//-----------------------比较两个vector的大小

//void CCompareVec(const vector<int>& v1,const vector<int> &v2)
//{
//	if (v1==v2)
//	{
//		cout<<"两个容器一样"<<endl;
//	}
//	else
//	{
//		cout<<"不一样了吧"<<endl;
//	}
//}
//int _tmain(int argc,_TCHAR *argv[])
//{
//	int in1[] = {1,2,3,4,5};
//	int in2[] = {1,2,3,4};
//	vector<int> vec1(in1,in1+5);
//	//vector<int> vec2{in2,in2+5};
//	vector<int> vec2(in2,in2+5);
//	CCompareVec(vec1,vec2);
//	system("pause");
//}

  
//----------------------忽然来个线程 爽一下  
//void function1(){  
//    cout<<" in func() "<<std::endl;  
//    return;  
//}  
//  
//int main(){  
//      
//    thread p1(function1);     //创建线程  
//    cout<<" in main() "<<std::endl;  
//    p1.detach();                
//    if(p1.joinable())  
//        p1.join();  
//    system("pause");  
//    return 0;  
//}    

//int _tmain(int argc,_TCHAR *argv[])
//{
//	string rstr ;
//	istringstream istr;
//	
//	const int n = 5;
//	deque<string> strD;
	/*if(cin>>rstr)
	{
		strD.push_back(rstr);
		
	}
	else
	{
		cout<<"没有输入什么东西"<<endl;
	}
	for(auto c:strD){
		cout<<c<<endl;
	}
	system("pause");*/

	//for (int i = 0; i < n; ++i)
	//{
	//	cin>>rstr;
	//	if (i<3)
	//	{
	//		strD.push_back(rstr);
	//	}
	//	else
	//	{
	//		strD.push_front(rstr);
	//	}
	//}
	//---------------用迭代器打印

	//for (dbeg;dbeg!=dend;dbeg++)    错误的编程， 因为插入操作会打乱iter的顺序 ，这样做最不安全
	//{
	//	cin>>rstr;
	//	if (dbeg<dend-1)
	//	{
	//		strD.push_back(*dbeg);
	//	}
	//	else
	//	{
	//		strD.push_front(*dbeg);
	//	}
	//}
//	while (cin>>rstr)
//	{
//		strD.push_back(rstr);
//		
//	}
//	cout<<"先定位到这里"<<endl;
//	cout<<strD.size()<<endl;
//	deque<string>:: iterator dbeg = strD.begin(); //这里出现一点问题，定义指针的时候要用的时候再定义，要不能出现incompliable错误
//	deque<string>:: iterator dend = strD.end();
//	for(dbeg;dbeg!=dend;++dbeg)
//	{
//		cout<<*dbeg<<endl;
//		
//	}
//	//	for(auto c:strD){
//	//	cout<<c<<endl;
//	//}
//	system("pause");
//	return 0;
//}
//------------------------奇数和偶数分开存储
//void print(deque<int>& li)
//{
//	for (auto c:li)
//	{
//		cout<<c<<endl;
//	}
//}
//int _tmain(int argc,_TCHAR * argv[])
//{
//	list<int> li;
//	deque<int> de_1;
//	deque<int> de_2;
//	int i;
//	while (cin>>i)
//	{
//		cout<<i<<endl;
//		li.push_back(i);
//	}
//	for (auto index=li.begin();index!=li.end();index++)
//	{
//		if ((*index)%2==0)
//		{
//			de_1.push_back(*index);
//		}
//		else
//		{
//			de_2.push_back(*index);
//		}
//	}
//	print(de_1);
//	print(de_2);
//	system("pause");
//	return 0;
//}

//-----------------删除操作-----这个题非常好，因为我们erase一个指针所指元素之后，要更新指针到删除后的下一个位置，开始循环
//int _tmain(int argc,_TCHAR * argv[])
//{
//	int	ia[] = {0,1,1,2,3,5,8,13,21,55,89};
//	vector<int> vec(ia,ia+11);
//	list<int> li(ia,ia+11);
//	list<int>::iterator i = li.begin();
//	//cout<<li[2]<<endl;
//	while ( i!= li.end())
//	{
//		if ((*i)%2!=0)
//		{
//			cout<<"在list中删除的是： "<<*i<<endl;
//			i = li.erase(i);   //更新指针到其下一个位置
//		}
//		else
//		{
//			++i;
//		}
//			
//
//	}
//	vector<int>::iterator j = vec.begin();
//	while (j != vec.end())
//	{
//		if ((*j)%2==0)
//		{
//			cout<<"在vector中删除的是： "<<*j<<endl;
//			j = vec.erase(j);
//		}
//		else
//		{
//			++j;
//		}
//	}
//	system("pause");
//}
string listr(forward_list<string> &li,string &string1,string &string2)
{
	auto lbeg = li.begin();
	while (lbeg!=li.end())
	{
		li.insert_after(lbeg,string2);
	}
}
int _tmain(int argc,_TCHAR *argv[])
{
	string str1 ="我是第一个str1";
	string	str2 = "我是第二个str2";
	forward_list<string> li;


}