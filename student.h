class Student              
{
	
public:                   
	void display();
	void set_value();
	Student() {

	 }
	 Student(int n,const char rrr[20],char s) {
		 num = n;
		 for (int i = 0; i < 20; i++) {
			 name[i] = rrr[i];
		 }
			 sex = s;
	}
private:
	 int num;
	  char name[20];
	char sex;
};
