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

//---------------------utf���ת��anis���� ����Ҫ�����Կ������Ĳ�����һ���ײ�const������ char���͵� ָ��
//string UTF8ToGB(const char* str)
//{
//     string result;
//     WCHAR *strSrc;
//     LPSTR szRes;
//
//     //�����ʱ�����Ĵ�С
//     int i = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
//     strSrc = new WCHAR[i+1];
//     MultiByteToWideChar(CP_UTF8, 0, str, -1, strSrc, i);
//
//     //�����ʱ�����Ĵ�С
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
//	string fname ="E://�ز�����//class.txt";
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
//-------------------------����ط�����Ҫ��֤��ζ�ȡÿһ�� �����ʶ�ȡ��Ȼ��洢

//int _tmain(int argc,_TCHAR* argv[]) 
//{
//	string file = "E://�ز�����//class.txt";
//	ifstream in(file);
//	vector<string> vec;
//	string temp;
//	if (in)
//	{
//		while (in>>temp)
//		{
//			cout<<"��������ĵ����ǣ� "<<temp<<endl;
//			vec.push_back(temp);
//
//		}
//	}
//	else
//	{
//		cout<<"�������Ǿ��ö�ȡ�ļ�ʧ���ˣ���"<<endl;
//
//	}
//	for (auto c: vec)
//	{
//		cout<<c<<endl;
//	}
//	system("pause");
//}


//-------------------------��ȡ���֣��绰�������vector
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
//		while (getline(cin,tream))  //getline�Ƕ�ȡһ��
//		{
//			poolinfo pd;
//			cout<<"������ʲô��"<<tream<<endl;
//			istringstream ins1(tream);
//			ins1>>pd.name;
//			while (ins1>>pdid)			//cin>>word �Ƕ�ȡһ���е�ÿ������ �����Կո������
//			{
//				cout<<pdid<<endl;
//				pd.poolid.push_back(pdid);
//			}
//			vec.push_back(pd);
//			/*cout<<"������һ����������ֹ��"<<endl;
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
