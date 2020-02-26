#include<iostream>
#include"workerManager.h"
#include"worker.h"
#include"boss.h"
#include"manager.h"
#include"employee.h"

using namespace std;

void test()
{
	Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "李四", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "王五", 3);
	worker->showInfo();
	delete worker;
}

int main()
{
	WorkerManager wm;//实例化管理对象
	int choice = 0;//用户选择
	//test();
	while (true)
	{
		wm.Show_Menu();
		cout << "请输入您的选择:  " << endl;
		cin >> choice;

		switch (choice) {
		case 0:	
			wm.ExitSystem();//退出系统
			break;
		case 1:		//增加职员
			wm.Add_Emp();
			break;
		case 2:		//显示职员
			wm.Show_Emp();
			break;
		case 3:		//删除职员
			wm.Del_Emp();
			break;
		case 4:		//修改职员
			wm.Mod_Emp();
			break;
		case 5:		//查找职员
			wm.Find_Emp();
			break;
		case 6:		//排序职员	
			wm.Sort_Emp();
			break;
		case 7:		//清空文档
			wm.Clean_File();
			break;
		default:	//清屏
			system("cls");
			break;  

		}
	}
	
	system("pause");
	return 0;
}