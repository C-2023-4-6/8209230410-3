#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	
	Point(int a = 60, int b = 80) {
		x = a;
		y = b;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "x坐标为：" << x << endl;
		cout << "y坐标为：" << y << endl;
	}
};
int main() {
	Point a;
	int c, d;
	cin >> c;
	cin >> d;
	a.setPoint(c,d);
	a.display();
	return 0;
}