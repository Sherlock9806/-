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
	
	
	void Clean_File();//清空文件
	void Sort_Emp();	//排序职工
	void Find_Emp();//查找职工
	void Mod_Emp();//修改职工
	int IsExist(int id);//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	void Del_Emp();//删除职工
	void Show_Emp();//显示职工
	int get_EmpNum();//统计人数
	bool m_FileIsEmpty;
	void save();//保存文件
	WorkerManager();//构造函数
	void init_Emp();
	void Show_Menu();//展示菜单
	void ExitSystem();//退出系统
	int m_EmpNum; //记录职员人数
	Worker** m_EmpArray; //职工数组指针
	void Add_Emp();//添加职工
	~WorkerManager();//析构函数
	
};