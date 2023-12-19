#include<iostream>
using namespace std;
class Student {
public:
	int num;
	int score;

	Student(int n, int s) {
		num = n;
		score = s;
	}
	void max(Student*p) {
		for (int i = 0; i < 4; i++) {
			if (p[i].score > p[i + 1].score)
			{
				int a, b;
				a = p[i].num;
				p[i].num = p[i + 1].num;
				p[i + 1].num = a;
				b = p[i].score;
				p[i].score = p[i + 1].score;
				p[i + 1].score = b;

			}
		}
		cout << "最高成绩者的学号为：" << p[4].num << endl;
	}
	
};
int main() {
	Student Class[5] = { Student(10,120),Student(1,100) ,Student(5,90) ,Student(8,119) ,Student(7,110) };
	Student* p = Class;
	Class->max(p);
	return 0;
}