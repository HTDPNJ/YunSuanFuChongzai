/*#include<iostream>
using namespace std;
class Complex2 {
private:
	int a;
	int b;
	friend Complex2 operator+(Complex2 &c1, Complex2 &c2);
	friend Complex2& operator++(Complex2 &c1);
	friend Complex2 operator++(Complex2 &c1, int);
public:
	Complex2(int a = 0, int b = 0) {
		this->a = a;
		this-> b = b;
	}
	void printCom() {
		cout << a << "+" << b << "i" << endl;
	}
	//成员函数实现二元运算符
	Complex2 operator-(Complex2 &c2) {
		Complex2 tmp(this->a-c2.a,this->b-c2.b);
		return tmp;
	}
	Complex2& operator--() {
		this->a--;
		this->b--;
		return *this;
	}
	Complex2 operator--(int) {
		Complex2 tmp = *this;
		this->a--;
		this->b--;
		return tmp;
	}
};

//友元函数实现二元运算符
Complex2 operator+(Complex2 &c1, Complex2 &c2) {
	Complex2 tmp;
	tmp.a=c1.a + c2.a;
	tmp.b = c1.b + c2.b;
	return tmp;
}

//友元函数实现一元运算符 前置++
Complex2& operator++(Complex2 &c1) {
	c1.a++;
	c1.b++;
	return c1;
}
//友元函数实现后置++
Complex2 operator++(Complex2 &c1,int ) {
	Complex2 tmp = c1;
	c1.a++;
	c1.b++;
	return tmp;
}

int main2020010902() {
	Complex2 c1(1, 2), c2(3, 4);
	Complex2 c3 = c1 + c2;
	c3.printCom();

	Complex2 c4 = c1-c2;
	c4.printCom();

	++c1;
	c1.printCom();

	--c1;
	c1.printCom();

	c1++;
	c1.printCom();

	c1--;
	c1.printCom();
	return 0;
}
*/