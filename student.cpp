#include <iostream>
#include"student.h"
using namespace std;
void Student::display()         
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value() {
    cout << "请分别输入学生的num,name,sex:";
    cin >> num;
    cin >> name;
    cin >> sex;
}