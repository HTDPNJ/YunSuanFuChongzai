#include<iostream>
using namespace std;
class Complex3 {
private:
	int a;
	int b;
	friend ostream& operator<<(ostream &out, Complex3 &c1);
public:
	Complex3(int a = 0, int b = 0) {
		this->a = a;
		this->b = b;
	}
	void printCom() {
		cout << a << "+" << b << "i" << endl;
	}
	//成员函数实现二元运算符
	Complex3 operator+(Complex3 &c2) {
		Complex3 tmp(a + c2.a, b + c2.b);
		return tmp;
	}
	
	Complex3 operator-(Complex3 &c2) {
		Complex3 tmp(a - c2.a, b - c2.b);
		return tmp;
	}
	Complex3& operator++() { //前置++
		this->a++;
		this->b++;
		return *this;
	}
	Complex3& operator--() { //前置--
		this->a--;
		this->b--;
		return *this;
	}
	Complex3 operator--(int) {  //后置--
		Complex3 tmp = *this;
		this->a--;
		this->b--;
		return tmp;
	}
	Complex3 operator++(int) {  //后置--
		Complex3 tmp = *this;
		this->a++;
		this->b++;
		return tmp;
	}
};

/*void operator<<(ostream &out, Complex3 &c1) {
	out << c1.a << "+" << c1.b<<"i" << endl;
}*/
ostream& operator<<(ostream &out, Complex3 &c1) {
	out << c1.a << "+" << c1.b << "i" << " ";
	return out;
}
int main2020114() {
	Complex3 c1(1, 2), c2(3, 4);
	Complex3 c4 = c1 - c2;
	c4.printCom();
	--c1;
	c1.printCom();
	c1--;
	c1.printCom();
	cout << "分界线" << endl;

	cout << c1<<"23333";
	return 1;
}