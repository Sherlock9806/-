#pragma once //��ֹͷ�ļ��ظ�����
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
	void save();//�����ļ�
	WorkerManager();//���캯��

	void Show_Menu();//չʾ�˵�
	void ExitSystem();//�˳�ϵͳ
	int m_EmpNum; //��¼ְԱ����
	Worker** m_EmpArray; //ְ������ָ��
	void Add_Emp();//���ְ��
	~WorkerManager();//��������
	
};