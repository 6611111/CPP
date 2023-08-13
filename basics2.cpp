#include<iostream>
using namespace std;
class Employee
{
	public:
		static string comn,loc;
		string Name,pinno,salary;
		Employee(string name,string pn,string sly);
		void speak();		
};// end of the class
// outside constructor
Employee::Employee(string name,string pn,string sly)
{
	Name=name;
	pinno=pn;
	salary=sly;
}
//outside method
void Employee::speak()
{
	cout<<Name<<" "<<pinno<<" "<<salary<<endl;
	cout<<comn<<" "<<loc<<endl;
}
string Employee::comn="TCS";
string Employee::loc="Chennai";
int main()
{
	Employee e1("Aradya","205","80000");
	e1.speak();
	Employee e2("Anusha","200","80000");
	e1.speak();
}
