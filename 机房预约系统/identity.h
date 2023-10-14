#pragma once
#include<iostream>
#include "globalFile.h"
#include <fstream>
#include"computerRoom.h"
#include<vector>
#include<algorithm>
#include"orderFile.h"
using namespace std;
class Identity
{
public:
	virtual void operMenu() = 0;
	string m_Name;
	string m_Pwd;
};