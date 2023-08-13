/*#include<iostream>
using namespace std;
class Student{
	public:
	string name,age,marks; // intance variables
	static string c;
	Student(string n,string a,string m)
	{
		name=n;
		age=a;
		marks=m;
	}
	void speak()
	{
		cout<<name<<" "<<age<<" "<<marks<<endl;
	}
};
int main()
{
	Student s1("Anusha","19","9CGPA");
	s1.speak();
}*/
#include<iostream>
using namespace std;
class Student{
	public:
		Student()
		{
			int c=2;
			cout<<c;
		}
};
int main()
{
	Student s1();
}
/*#include<iostream>
using namespace std;
class Student{
	public:
	string name,age,marks; // intance variables
	static string c;
	Student(string n,string a,string m);
	void speak();
};
string Student::c="AEC";
void Student::speak()
{
	cout<<name<<" "<<age<<" "<<marks<<" "<<c<<endl;
}
Student::Student(string n,string a,string m)
{
	name=n;
	age=a;
	marks=m;
}
int main()
{
	Student s1("Anusha","19","9CGPA");
	s1.speak();
	Student s2("Vijaya","19","8CGPA");
	s1.speak();
}*/
