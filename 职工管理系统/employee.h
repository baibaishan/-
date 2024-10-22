#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"worker.h"

class Employee :public Worker {
public:

	//¹¹Ôìº¯Êý
	Employee(int id ,string name,int dId);

	virtual void showInfo();

	virtual string getDeptName();
};
