#include<iostream>
using namespace std;
class Time             
{
private:            
		int hour;
	int minute;
	int sec ;
public:
	void shu(Time p) {
		cin >> p.hour;
		cin >> p.minute;
		cin >> p.sec;
		cout << p.hour << ":" << p.minute << ":" << p.sec << endl;
	}
};
int main()
{
	Time tl{};
	tl.shu(tl);
	return 0;
}