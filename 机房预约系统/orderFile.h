#pragma once
#include<iostream>
#include<fstream>
#include<map>
#include"globalFile.h"
using namespace std;

class orderFile
{
public:
	//���캯��
	orderFile();
	//����ԤԼ��¼
	void updateOrder();
	//��¼������
	map<int, map<string, string>>m_orderData;
	//��¼������
	int m_Size;
};