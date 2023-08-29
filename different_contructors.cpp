#include<bits/stdc++.h>
using namespace std;
class Names{
	public:
		string name;
		int rolln;
		Names(string n,int r)
		{
			name=n;         // contructor
			rolln=r;
		}
		Names(string n)
		{
			name=n;
			rolln=0;
		}
		Names(int r)
		{
			rolln=r;
		}
		Names()
		{
			name="No name";
			rolln=0;
		}
		void speak()
		{
			cout<<name<<" "<<rolln<<endl;
		}
		Names(Names &s1){      // copy constructor
			name=s1.name;
			rolln=s1.rolln;
		}
};
int main()
{
	Names s1;
	s1.speak();
	Names s2("Anusha",19);
	s2.speak();
	Names s3("Anusha");
	s3.speak();
	Names s4(25);
	s4.speak();
	Names s5(s1);        //
	s5.speak();          // copy constructor
}
