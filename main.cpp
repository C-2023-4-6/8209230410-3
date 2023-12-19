#include <iostream>             
#include "student.h"
using namespace std;
int main()
{
	
	Student stud; 
	stud.set_value();
	
	Student stud1(007, "tcg", 'm');
	stud.display();
	stud1.display();
	return 0;
}