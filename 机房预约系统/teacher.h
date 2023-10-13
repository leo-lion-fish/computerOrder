#pragma once
#define _CRT_SECURE_NO_WARINGS
#include "identity.h"
#include<iostream>
using namespace std;

class Teacher : public Identity
{
public:
	Teacher();
	virtual void operMenu();
	Teacher(int empId, string name, string pwd);
	void showAllOrder();
	void validOrder();

	int m_EmpId;
};