#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main(void) {
	//cout << "��ã�" << endl;
	string ret;
	for(int i = 0; i < 10; i++) {
		cout << "��" << (i + 1) << "������"<< endl;
		cout << "��ϲ��������ũҩ��yes/no" << endl;
		cin >> ret;
		if(ret != "yes") {
			continue;
		}
		cout << "���ǼӸ�΢�Űɣ�" << endl;

		cout << "�������㣬����������" << endl;
		cin >> ret;
		if(ret == "yes"){
			goto happy;
		}
	}

	system("pause");
	return 0;

happy:
	cout << "��������֮��..." << endl;
	system("pause");
	return 0;
}