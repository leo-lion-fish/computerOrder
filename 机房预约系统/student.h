#pragma once
#include<iostream>
#include "identity.h"
using namespace std;
/*ѧ��������Ҫ�����У�

��ʾѧ�������Ĳ˵�����
����ԤԼ
�鿴����ԤԼ
�鿴����ԤԼ
ȡ��ԤԼ
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