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

//----------------�β���ָ�� ����ôд �Ժ�ţ���� �ٸ�
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
//	//-----------------ʹ��ָ�뽻������int�Ͷ����ֵ
//	int i = 1;
//	int j = 2;
//	change(&i,&j);
//	cout<<i<<j<<endl;
//	system("pause");
//}
//------------------ʹ��������--------------------
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
//-----------------���string�������Ƿ��д�д��Ȼ���޸�
//void check(const string &s)
//{
//	//auto begt = s.begin();
//	int n=0;
//	for(auto c:s)
//	{
//		cout<<c<<endl;
//		if (isupper(c))
//		{
//			cout<<"����Ŀ�꣬bang��"<<c<<endl;
//		}
//	}
//}
//----------------------�ı�ʵ�ε�ֵ���β��Ǹ����������
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
//---------------------������������ֵ
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
//	cout<<"�������ǣ�"<<compar(v1,posv2)<<endl;
//	system("pause");
//}
//--------------------ָ������ô������ �Ҳ� ����ָ��ָ��Ķ���Ŷ
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

//---------print ����Ķ���
//void print(const int t)
//{
//	cout<<t<<endl;
//}
//-------------------��������Ĵ��ݣ�����Ҫ��--��һ��
//void print(const int (&arr)[2])   //��һ�ֱ���Ҫ֪�������length
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
//=================����������ݣ��ڶ���----------------
//void print(const int *arr,size_t sz)
//{
//	size_t t = 0;
//	for (t; t < sz; ++t)   //ע��������< size
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
//void print(const int arr[2])   //�������õ���һ���Ǵ���ģ����������ڻ���֪����һ�����  �ֿ���������� �����ֶ�һ�� md
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

////-----------------------���ú��� �����ǵ�һ�μ�
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

//------------------��������ĺ�����ô��ʾ
////string  (&func(int n))[10]
////��������һ����������ã������麬��10��string���͵Ķ���
////��һ�ַ�����ʹ��typedef ���ͱ���
//using arr = string[10];
//arr& func(arr& a);
////�ڶ��ַ�����ʹ��λ�÷�������
//auto func2(arr& a2)->string(&)[10];
////�����ַ�����ʹ��decltype�ؼ���
//string a3[] = {"1","2","3","4","5","6","7","8","9","10"};
////string a3[10];
//decltype(a3)& func(arr& a); 

//---------------����һ��vector����洢��Ԫ����ָ������ָ�룬ÿ������ȡ����Ԫ�ؾ���
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
//	//typedef int(*p)(int i,int j);//��ֱ��
//	typedef decltype(plus) *p;  //�������
//	vector<p> vec;
//	return 0;
//	system("pause");
//
//}

//---------------����һ��vector����洢��Ԫ����ָ������ָ�룬ÿ������ȡ����Ԫ�ؾ���
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
//	 //---��һ��
//	typedef int(*funcp)(int,int);
//	//-----�ڶ���
//	typedef decltype(chu) *funcp1;
//	//----������
//	//using funcp2 = int(*)(int,int);  vs2012 ��֧��
//	//funcp2 fp2(int);
//
//
//	//---������
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