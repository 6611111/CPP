#include<iostream>
using namespace std;
class Circle{
	private:
	int radius;
	public:
	Circle(int r)
	{
		radius=r;
	}
	int methods()
	{
		int a,p;
		a=3.14*radius*radius;
		p=2*3.14*radius;
		cout<<a<<endl;
		cout<<p<<endl;
	}
	void setradius(int val)
	{
		radius=val;
	}
};
int main()
{
	Circle c1(5);
	c1.methods();
	c1.setradius(5);
	c1.methods();
}
