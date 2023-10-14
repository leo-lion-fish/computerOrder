#pragma once
#include<iostream>
#include<fstream>
#include<map>
#include"globalFile.h"
using namespace std;

class orderFile
{
public:
	//构造函数
	orderFile();
	//更新预约记录
	void updateOrder();
	//记录的容器
	map<int, map<string, string>>m_orderData;
	//记录的条数
	int m_Size;
};