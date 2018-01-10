// chapter6_function_function.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include<sstream>
#include<iostream>
#include<vector>
using namespace std;

//void reset(int &n)
//	{
//		n=5;
//	}

//----------------形参是指针 我这么写 以后牛逼了 再改
//void change(int *p1,int *p2)
//{
//	int ii = *p1;
//	int jj = *p2;
//	*p1 = jj;
//	*p2 = ii;
//}
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	////return 0;
//	//int t= 10;
//	//reset(t);
//	//cout<<t<<endl;
//	//system("pause");
//	//-----------------使用指针交换两个int型对象的值
//	int i = 1;
//	int j = 2;
//	change(&i,&j);
//	cout<<i<<j<<endl;
//	system("pause");
//}
//------------------使用引用呢--------------------
//void reset(int &i,int &j)
//{
//	int val ;
//	val = i;
//	i = j;
//	j = val;
//}
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int i=1,j=2;
//	reset(i,j);
//	cout<<i<<" "<<j<<endl;
//	system("pause");
//}
//-----------------检查string对象中是否有大写，然后修改
//void check(const string &s)
//{
//	//auto begt = s.begin();
//	int n=0;
//	for(auto c:s)
//	{
//		cout<<c<<endl;
//		if (isupper(c))
//		{
//			cout<<"发现目标，bang："<<c<<endl;
//		}
//	}
//}
//----------------------改变实参的值，形参是个引用最好上
//void change(string& s)
//{
//	for(auto &c:s)
//	{
//		cout<<c<<endl;
//		if (isupper(c))
//		{
//			c =c+32;
//		}
//	}
//}
//int _tmain(int argc,_TCHAR* argv[])
//{
//	string s;
//	s="abckefgHijk";
//	//check(s);
//	change(s);
//	cout<<s<<endl;
//	system("pause");
//}
//---------------------交换两个参数值
//void change( int& i, int *j)
//{
//	int ii=i;
//	i = *j;
//	*j = ii;
//}
//
//int _tmain(int argc,_TCHAR* argv[])
//{
//	int i = 1;
//	int j = 2;
//	//int *p= &j;
//	change(i,&j);
//	cout<<i<<j<<endl;
//	system("pause");
//}
//int compar(int i,int *j)
//{
//	if (i>*j)
//	{
//		return i;
//	}
//	else
//	{
//		return *j;
//	}
//}
//int _tmain(int argc,_TCHAR* argv[])
//{
//	int v1,v2;
//	cin>>v1>>v2;
//	int* posv2 = &v2;
//	
//	cout<<"最大的数是："<<compar(v1,posv2)<<endl;
//	system("pause");
//}
//--------------------指针是怎么交换的 我擦 不是指针指向的对象哦
//void change( int* &i, int* &j)
//{
//	/*int ii=i;
//	i = *j;
//	*j = ii;*/
//	int *pos = nullptr;
//	pos = i;
//	i = j;
//	j = pos;
//}
//
//int _tmain(int argc,_TCHAR* argv[])
//{
//	int i = 1;
//	int j = 2;
//	//int *p= &j;
//	int *pos_i = &i;
//	int *pos_j = &j;
//	cout<<pos_i<<" "<<pos_j<<endl;
//    cout<<*pos_i<<" "<<*pos_j<<endl;
//	change(pos_i,pos_j);
//	cout<<pos_i<<" "<<pos_j<<endl;
//	cout<<*pos_i<<" "<<*pos_j<<endl;
//	system("pause");
//}

//---------print 定义的对象
//void print(const int t)
//{
//	cout<<t<<endl;
//}
//-------------------数组参数的传递（很重要）--第一种
//void print(const int (&arr)[2])   //这一种必须要知道数组的length
//{
//	for (auto c:arr)
//	{
//		cout<<c<<endl;
//	}
//}
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int t = 0;
//	int arr_t[2] = {1,2};
//	//print(t);
//	print(arr_t);
//
//	system("pause");
//}
//=================数组参数传递，第二种----------------
//void print(const int *arr,size_t sz)
//{
//	size_t t = 0;
//	for (t; t < sz; ++t)   //注意这里是< size
//	{
//		cout<<arr[t]<<endl;
//	}
//}
//int _tmain(int argc,_TCHAR* argv[])
//{
//	int arr[2]= {1,2};
//	print(arr,end(arr)-begin(arr));
//	system("pause");
//}
//void print(const int arr[2])   //不带引用的这一种是错误的，但是我现在还不知道哪一点错了  又看看别的文章 好像又都一样 md
//{
//	for (size_t i = 0; i < 2; i++) 
//	{
//		cout<<arr[i]<<endl;
//	}
//}
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int t = 0;
//	int arr_t[2] = {3,2};
//	//print(t);
//	print(arr_t);
//
//	system("pause");
//}

////-----------------------引用函数 ，还是第一次见
//char &get_val(string &s,int n)
//{
//	return s[n];
//}
//int _tmain(int argc,_TCHAR *argv[])
//{
//	string s = "This is a big pig";
//	get_val(s,0)='t';
//	cout<<s<<endl;
//	system("pause");
//}

//------------------返回数组的函数怎么表示
////string  (&func(int n))[10]
////函数返回一个数组的引用，该数组含有10个string类型的对象
////第一种方法，使用typedef 类型别名
//using arr = string[10];
//arr& func(arr& a);
////第二种方法，使用位置返回类型
//auto func2(arr& a2)->string(&)[10];
////第三种方法，使用decltype关键字
//string a3[] = {"1","2","3","4","5","6","7","8","9","10"};
////string a3[10];
//decltype(a3)& func(arr& a); 

//---------------定义一个vector里面存储的元素是指向函数的指针，每次运算取出其元素就行
//int plus(const int i,const int j)
//{
//	return i+j;
//}
//int _tmain(int argc,_TCHAR* argv[])
//{
//	/*vector<int*> vecpos;
//	int i=5,j=4;
//	int (*pos)(const int,const int);
//	vecpos.push_back(pos);*/
//	//typedef int(*p)(int i,int j);//更直观
//	typedef decltype(plus) *p;  //更好理解
//	vector<p> vec;
//	return 0;
//	system("pause");
//
//}

//---------------定义一个vector里面存储的元素是指向函数的指针，每次运算取出其元素就行
//int plus( int i, int j)
//{
//	return i+j;
//}
//int del( int i, int j)
//{
//	return i-j;
//}
//int mul( int i, int j)
//{
//	return i*j;
//}
//int chu( int i, int j)
//{
//	return i/j;
//}
//
//int _tmain(int argc,_TCHAR* argv[])
//{
//
//	 //---第一种
//	typedef int(*funcp)(int,int);
//	//-----第二种
//	typedef decltype(chu) *funcp1;
//	//----第三种
//	//using funcp2 = int(*)(int,int);  vs2012 不支持
//	//funcp2 fp2(int);
//
//
//	//---第四种
//	//auto funcp3(int) ->int(*)(int,int);
//	
//
//	vector<funcp1> vec;
//	vec.push_back(plus);
//	vec.push_back(del);
//	vec.push_back(mul);
//	vec.push_back(chu);
//
//	for (auto c:vec)
//	{
//		
//		cout<<c(2,2)<<endl;
//	}
//
//
//	system("pause");
//
//}