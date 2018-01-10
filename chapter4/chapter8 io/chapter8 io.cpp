// chapter8 io.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
#include<sstream>
#include<iostream>
#include<fstream>
#include<string>
#include <Windows.h>
using namespace std;

//---------------------utf如何转成anis编码 很重要，可以看到传的参数是一个底层const变量的 char类型的 指针
//string UTF8ToGB(const char* str)
//{
//     string result;
//     WCHAR *strSrc;
//     LPSTR szRes;
//
//     //获得临时变量的大小
//     int i = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
//     strSrc = new WCHAR[i+1];
//     MultiByteToWideChar(CP_UTF8, 0, str, -1, strSrc, i);
//
//     //获得临时变量的大小
//     i = WideCharToMultiByte(CP_ACP, 0, strSrc, -1, NULL, 0, NULL, NULL);
//     szRes = new CHAR[i+1];
//     WideCharToMultiByte(CP_ACP, 0, strSrc, -1, szRes, i, NULL, NULL);
//
//     result = szRes;
//     delete []strSrc;
//     delete []szRes;
//
//     return result;
//}
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	//return 0;
//	vector<string> vec ;
//	string fname ="E://回测数据//class.txt";
//	ifstream in(fname);
//	
//	if (in)
//	{
//		string ss = "";
//		while (getline(in,ss))
//		{
//			vec.push_back(ss);
//		}
//	}
//	else
//	{
//		cout<<"cant open this file:"<<in<<endl;
//	}
//
//	/*for (auto c:vec)
//	{
//		cout<<c<<endl;
//	}*/
//	in.close();
//	for (int i = 0; i < vec.size(); ++i)
//	{
//		
//		const char* p = vec[i].data();
//		string msg = UTF8ToGB(p);
//		cout<<vec[i]<<endl;
//	}
//	system("pause");
//	return 0;
//}
//-------------------------这个地方我们要验证如何读取每一行 按单词读取，然后存储

//int _tmain(int argc,_TCHAR* argv[]) 
//{
//	string file = "E://回测数据//class.txt";
//	ifstream in(file);
//	vector<string> vec;
//	string temp;
//	if (in)
//	{
//		while (in>>temp)
//		{
//			cout<<"现在输入的单词是： "<<temp<<endl;
//			vec.push_back(temp);
//
//		}
//	}
//	else
//	{
//		cout<<"现在我们觉得读取文件失败了？？"<<endl;
//
//	}
//	for (auto c: vec)
//	{
//		cout<<c<<endl;
//	}
//	system("pause");
//}


//-------------------------读取名字，电话号码存入vector
//struct poolinfo
//{
//	string name;
//	vector<string> poolid;
//};
//int _tmain(int argc,_TCHAR* argv[])
//{
//	string tream,pdid;
//	
//	ostringstream os;
//	vector<poolinfo> vec;
//	
//		//ins1>>tream;
//		while (getline(cin,tream))  //getline是读取一行
//		{
//			poolinfo pd;
//			cout<<"读入了什么呢"<<tream<<endl;
//			istringstream ins1(tream);
//			ins1>>pd.name;
//			while (ins1>>pdid)			//cin>>word 是读取一行中的每个单词 就是以空格隔开的
//			{
//				cout<<pdid<<endl;
//				pd.poolid.push_back(pdid);
//			}
//			vec.push_back(pd);
//			/*cout<<"再输入一个整数就终止："<<endl;
//			int d;
//			cin>>d;
//			getchar();*/
//		}
//
//	
//	for (auto c:vec)
//	{
//		cout<<c.name<<endl;
//	}
//	system("pause");
//}
