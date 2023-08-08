#include<iostream>
using namespace std;
class Student{
	public:
	  string name,roll,clg,branch;
	  int bc;
	  double per;
	  Student(string n,string r,string c,string br,int b,double p) // paramitarized contructor
	  {
	  	name=n;
	  	roll=r;
	  	clg=c;
	  	branch=br;
	  	bc=b;
	  	per=p;
	  }
	  void display()
	  {
	  	 cout<<roll<<" "<<name<<" "<<clg<<" ";
	  	 cout<<branch<<" "<<bc<<" "<<per<<endl;
	  }
};
int main()
{
	//Student s1;  default constructor
	Student s1("Anusha","1254","AEC","CSE",0,9.02);// paramitarized contructor object
	s1.display();
	return 0;
}
