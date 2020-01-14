#include <iostream>
#include "myArray.h"
using namespace std;
//重载数组[]和=
int main()
{
	Array a1(10);
	for (int i = 0;i < a1.length();i++) {
		a1[i]= i;
	}
	for (int i = 0;i < a1.length();i++) {
		cout<<a1[i]<<endl;
	}
	Array a2 = a1;
	cout << "打印a2" << endl;
	for (int i = 0;i < a2.length();i++) {
		cout << a2.getData(i) << endl;
	}


	Array a3(5);
	a3 = a1;
	for (int i = 0;i < a3.length();i++) {
		cout << a3[i] << endl;
	}

	a3[3] = 2;
	if (a3 == a1) {
		cout << "相等";
	}
	else {
		cout << "不相等";
	}
	return 0;
}