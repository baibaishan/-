#include "workManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

int main() {

	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(3, "王五", 3);
	//worker->showInfo();
	//delete worker;



	//实例化管理者对象

	WorkerManager wm;
	int choice = 0;

	//调用成员函数

	while (true) {
		wm.Show_Menu();
		cout << "请输入你的选择" << endl;
		cin >> choice;

		switch (choice) {
		case 0:   //退出系统
			wm.exitSystem();
			break;
		case 1:   //添加职工
			wm.Add_Emp();
			break;
		case 2:   //显示职工
			wm.Show_Emp();
			break;
		case 3:   //删除职工
			wm.Del_Emp();
			break;
		case 4:   //修改职工
			wm.Mod_Emp();
			break;
		case 5:   //查找职工
			wm.Find_Emp();
			break;
		case 6:   //排序职工
			wm.Sort_Emp();
			break;
		case 7:   //清空文件
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	

	system("pause");
	return 0;
}