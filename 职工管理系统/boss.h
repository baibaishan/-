#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"worker.h"

class Boss :public Worker {
public:

	//���캯��
	Boss(int id, string name, int dId);

	virtual void showInfo();

	virtual string getDeptName();
};
