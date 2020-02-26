#include"workerManager.h"
WorkerManager::WorkerManager()
{
	//��ʼ������
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;

}
//�����ļ�
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);


	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
}
//����ְ��
void WorkerManager::Add_Emp()
{
	cout << "����������ְ�������� " << endl;

	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) {
		//���
		//����ռ��С
		
		int newSize = this->m_EmpNum + addNum;

		//�����¿ռ�
	
		Worker** newSpace = new Worker * [newSize];
		//��ԭ���ռ�����ݿ������µĿռ�

			if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//���������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "�������" << i + 1 << "��ְԱ���:  " << endl;
			cin >> id;
			cout << "�������" << i + 1 << "��ְԱ����:  " << endl;
			cin >> name;
			cout << "�������ְԱ��λ" << endl;

			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;

			}
			//����ְ��ְ�� ���浽����
			newSpace[this->m_EmpNum + i] = worker;


		}
		//�ͷ�ԭ���Ŀռ�
		delete[] this->m_EmpArray;

		//�����¿ռ�ָ��
		this->m_EmpArray = newSpace;
		//����ְԱ����
		this->m_EmpNum = newSize;
		//�ɹ�
		cout << "�ɹ����" << addNum << "����ְԱ" << endl;
		this->save();

	}
	else {
		cout << "��������" << endl;
	}
	system("pause");
	system("cls");
}
//��������
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
	}
}
//��ʾ�˵�
void WorkerManager::Show_Menu()
{	
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
}
//�˳�ϵͳ
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
