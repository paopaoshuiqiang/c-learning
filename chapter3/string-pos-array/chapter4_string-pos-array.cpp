// chapter4_string-pos-array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<vector>
//#include<string>
#include<sstream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	/*string s1,s2;
	cin >> s1>>s2;
	cout<<s1<<s2<<endl;
	return 0;*/
	
	//����һ�У���������Ϣ
	/**
	string line;
	while(getline(cin,line)){
		cout<<line<<endl;
	}
	return 0;
	*/


	/*
	*getline �÷�
	string line;
	while (getline(cin,line))
	{
		if (!line.empty())
		{
			cout<<line<<endl;
		}
		else
		{
			return 0;
		}
	}
	return 0;
	*/

	/*

	string s1 = "hello";
	string s = "hello"+", ";
	string s2 = s1 + ",";
	string s3 = s1+","+"world";   // �ȼ��ڣ�s1+��������+��world��
	string s4 = "hello"+", "+s1;  //�ȼ��� hello+��+s1  ����
	*/
	//----��ѭ�������ı�ԭ��ֵ
	/*string str = "some string";
	for (auto c:str)
	{
		cout<<c<<endl;
	}
	system("pause");*/
	
	//�ı�ԭ���ַ�����ֵ


	 //-------------vector--------------
	/*vector<int> vector1;
	for (int i = 0; i < 100; i++)
	{
		cout<<i<<endl;
		vector1.push_back(i);
	}
	
	system("pause");*/
//--------------������
	//vector<int> vector1;
	//int line;
	//while (cin>>line)
	//{
	//	cout<<line<<endl;
	//	vector1.push_back(line);
	//}
	////system("pause");
	//for (int i = 0; i < vector1.size(); i++)
	//{
	//	cout<<vector1[i]<<endl;
	//}
	//system("pause");

	////�������vector�������Ԫ�أ�Ȼ����������
	//vector<int> vec;
	//int num;
	//while (cin>>num)
	//{
	//	cout<<num<<" ";
	//	cout<<endl;
	//	vec.push_back(num);
	//}
	//for (auto &c:vec)
	//{
	//	if (c%2==1)
	//	{
	//		c = c*2;
	//		cout<<c<<endl;
	//	}
	//}
	//system("pause");





}

