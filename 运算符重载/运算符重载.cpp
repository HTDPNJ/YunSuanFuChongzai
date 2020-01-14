#include <iostream>
using namespace std;

class Complex {
public:
	int a;
	int b;
public:
	Complex(int a=0,int b=0) {
		this->a = a;
		this->b = b;
	}
	void printCom() {
		cout << a << "+" << b << "i" << endl;
	}
};

Complex myAdd(Complex &c1, Complex &c2) {
	Complex tmp(1, 2);
	tmp.a = c1.a + c2.a;
	tmp.b = c1.b + c2.b;
	return tmp;
}
Complex operator +(Complex &c1, Complex &c2) {
	//全局函数实现运算符重载
	Complex tmp(1, 2);
	tmp.a = c1.a + c2.a;
	tmp.b = c1.b + c2.b;
	return tmp;
}
int main2020010902()
{
	Complex c1(1, 2), c2(3, 4);
	Complex c3;
	Complex c4 = c1+c2;
	c4.printCom();
	return 0;
}