#pragma once //防止头文件重复包含
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"
#include<fstream>
#define FILENAME "empFile.txt"

using namespace std;

class WorkerManager
{
public:
	void save();//保存文件
	WorkerManager();//构造函数

	void Show_Menu();//展示菜单
	void ExitSystem();//退出系统
	int m_EmpNum; //记录职员人数
	Worker** m_EmpArray; //职工数组指针
	void Add_Emp();//添加职工
	~WorkerManager();//析构函数
	
};