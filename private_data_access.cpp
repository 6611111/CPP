#include<bits/stdc++.h>
using namespace std;
class H_being{
	private:      // private members are access in out side the class
		string name;
		int age;
	public:
		void setdata(int a,string n)
		{
			age=a;
			name=n;
		}
		void getdata()
		{
			cout<<"I am "<<name <<" "<<"With age "<<age<<endl;
		}
};
int main()
{
	H_being a;
	a.setdata(19,"Anusha");
	a.getdata();
}
