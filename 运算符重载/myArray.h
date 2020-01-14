#pragma once
#include<iostream>
using namespace std;
class Array {
private:
	int m_length;
	int *m_space;
public:
	Array();
	Array(int a);
	Array(const Array& obj);
	~Array();
public:
	void setData(int index,int value);
	int getData(int index);
	int length();
	int& operator[](int i);
	Array& operator=(Array &a1);
	bool operator==(Array& a1);
	bool operator!=(Array& a1);
protected:
};