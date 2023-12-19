#include<iostream>
using namespace std;
class chang {
public:
	void ru();
	void tiji();
private:
	int length;
	int width;
	int height;
}s1;
void chang::ru() {
	cout << "请输入长，宽，高：";
	cin >> length;
	cin >> width;
	cin >> height;
}
void chang::tiji() {
	int tiji = length * width * height;
	cout << "该长方柱的体积为：" << tiji << endl;
}
int main() {
	for (int i = 0; i < 3; i++) {
		s1.ru();
		s1.tiji();
	}
	return 0;
}