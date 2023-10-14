#pragma once
#include<iostream>
using namespace std;
#include"identity.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
#include<vector>
#include<algorithm>
class Manager :public Identity
{
public:
	Manager();
	Manager(string name, string pwd);
	//选择菜单
	virtual void operMenu();
	//添加账号
	void addPerson();
	//查看账号
	void showPerson();
	//查看机房信息
	void showComputer();
	//清空预约信息
	void cleanFile();
	//初始化容器
	void initVector();
	//检查重复 传入id 和 type
	bool checkRepeat(int id,int type);
	vector<Student>vStu;
	vector<Teacher>vTea;
	vector<computerRoom>vCom;
};