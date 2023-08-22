/*#include<iostream>
using namespace std;
struct ListNode{
	int data;
	ListNode *next;
	ListNode(int val){
		data=val;
		next=NULL;
	}
};
int main()
{
	ListNode *head=new ListNode(10);
	cout<<head->data;
	return 0;
}*/
#include<iostream>
using namespace std;
class Circle{
	public:
	int radius;
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
};
int main()
{
	Circle c1(5);
	c1.methods();
}
