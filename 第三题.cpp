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
	cout << "�����볤�����ߣ�";
	cin >> length;
	cin >> width;
	cin >> height;
}
void chang::tiji() {
	int tiji = length * width * height;
	cout << "�ó����������Ϊ��" << tiji << endl;
}
int main() {
	for (int i = 0; i < 3; i++) {
		s1.ru();
		s1.tiji();
	}
	return 0;
}