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
	
	
	void Clean_File();//����ļ�
	void Sort_Emp();	//����ְ��
	void Find_Emp();//����ְ��
	void Mod_Emp();//�޸�ְ��
	int IsExist(int id);//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	void Del_Emp();//ɾ��ְ��
	void Show_Emp();//��ʾְ��
	int get_EmpNum();//ͳ������
	bool m_FileIsEmpty;
	void save();//�����ļ�
	WorkerManager();//���캯��
	void init_Emp();
	void Show_Menu();//չʾ�˵�
	void ExitSystem();//�˳�ϵͳ
	int m_EmpNum; //��¼ְԱ����
	Worker** m_EmpArray; //ְ������ָ��
	void Add_Emp();//���ְ��
	~WorkerManager();//��������
	
};