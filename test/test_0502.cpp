#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main(void) {
	//cout << "你好！" << endl;
	string ret;
	for(int i = 0; i < 10; i++) {
		cout << "第" << (i + 1) << "次相亲"<< endl;
		cout << "你喜欢打王者农药吗？yes/no" << endl;
		cin >> ret;
		if(ret != "yes") {
			continue;
		}
		cout << "我们加个微信吧！" << endl;

		cout << "我中意你，你中意我吗？" << endl;
		cin >> ret;
		if(ret == "yes"){
			goto happy;
		}
	}

	system("pause");
	return 0;

happy:
	cout << "开启浪漫之旅..." << endl;
	system("pause");
	return 0;
}