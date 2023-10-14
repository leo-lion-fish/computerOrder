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
	//ѡ��˵�
	virtual void operMenu();
	//����˺�
	void addPerson();
	//�鿴�˺�
	void showPerson();
	//�鿴������Ϣ
	void showComputer();
	//���ԤԼ��Ϣ
	void cleanFile();
	//��ʼ������
	void initVector();
	//����ظ� ����id �� type
	bool checkRepeat(int id,int type);
	vector<Student>vStu;
	vector<Teacher>vTea;
	vector<computerRoom>vCom;
};