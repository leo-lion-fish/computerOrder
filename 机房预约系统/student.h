#pragma once
#include<iostream>
#include "identity.h"
using namespace std;
/*学生类中主要功能有：

显示学生操作的菜单界面
申请预约
查看自身预约
查看所有预约
取消预约
*/
class Student : public Identity
{
public:
	Student();
	virtual void operMenu();
	Student(int id, string name, string pwd);
	void applyOlder();
	void showMyOrder();
	void showAllOrder();
	void	cancelOrder();
	
	int m_Id;
};