#include<bits/stdc++.h>
using namespace std;
class Humabeing{
	public:
		string *name;
		int *age;
		Humabeing(string n="Anusha",int a=19)
		{
			name=new string;
			age=new int;
			*name=n;
			*age=a;
		}
		~Humabeing()
		{
			delete name;
			delete age;
			cout<<"This is distructor"<<endl;
		}
};
int main()
{
	Humabeing *s2=new Humabeing();
	delete s2;
	
}
